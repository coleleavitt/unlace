/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402C0
// Address: 0x00000000000402C0

//----- (00000000000402C0) ----------------------------------------------------
__int64 __fastcall sub_402C0(__int64 a1, int a2, char a3)
{
  _QWORD *v3; // r13
  _QWORD *v4; // r15
  _BYTE *v6; // r8
  __int64 result; // rax
  int v8; // ecx
  int *v9; // rax
  char v10; // cl
  unsigned int v11; // r12d
  int v12; // ecx
  enum __ptrace_request v13; // edi
  FILE *v14; // rax
  FILE *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // al
  char *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // r13
  bool v25; // zf
  FILE *v26; // [rsp+0h] [rbp-1078h]
  char *v27; // [rsp+8h] [rbp-1070h]
  char *v28; // [rsp+8h] [rbp-1070h]
  char v29; // [rsp+8h] [rbp-1070h]
  _BYTE *v30; // [rsp+10h] [rbp-1068h]
  __int64 v31; // [rsp+18h] [rbp-1060h]
  char *s1[2]; // [rsp+20h] [rbp-1058h] BYREF
  __int64 v33; // [rsp+30h] [rbp-1048h]
  char v34[4096]; // [rsp+40h] [rbp-1038h] BYREF
  unsigned __int64 v35; // [rsp+1040h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 1032);
  v4 = (_QWORD *)(a1 + 1040);
  if ( v3 != (_QWORD *)(a1 + 1040) )
  {
    v6 = (_BYTE *)a1;
    LODWORD(result) = 1;
    while ( 1 )
    {
      v11 = result;
      if ( a3 != (*((_DWORD *)v3 + 8) != a2) )
      {
LABEL_51:
        result = v11;
        goto LABEL_52;
      }
      if ( *((_DWORD *)v3 + 15) || *((_BYTE *)v3 + 64) )
        break;
      v8 = *((_DWORD *)v3 + 11);
      if ( *((_BYTE *)v3 + 65) )
      {
        v9 = (int *)v3 + 11;
        if ( v8 <= 0 )
          goto LABEL_18;
        goto LABEL_17;
      }
      result = (unsigned int)result;
      if ( v8 )
      {
        if ( !(_BYTE)under_debugger )
          interr(30188);
LABEL_67:
        BUG();
      }
LABEL_52:
      v22 = (_QWORD *)v3[1];
      if ( v22 )
      {
        do
        {
          v23 = v22;
          v22 = (_QWORD *)*v22;
        }
        while ( v22 );
      }
      else
      {
        v23 = (_QWORD *)v3[2];
        if ( (_QWORD *)*v23 != v3 )
        {
          v24 = (__int64)(v3 + 2);
          do
          {
            v23 = *(_QWORD **)(*(_QWORD *)v24 + 16LL);
            v25 = *v23 == *(_QWORD *)v24;
            v24 = *(_QWORD *)v24 + 16LL;
          }
          while ( !v25 );
        }
      }
      v3 = v23;
      if ( v23 == v4 )
        return result;
    }
    v9 = (int *)v3 + 11;
    v8 = *((_DWORD *)v3 + 11);
    if ( v8 <= 0 )
      goto LABEL_18;
LABEL_17:
    v12 = v8 - 1;
    *v9 = v12;
    if ( v12 > 0 )
      goto LABEL_51;
LABEL_18:
    if ( *((int *)v3 + 12) > 0
      || *((_BYTE *)v3 + 65)
      || !v6[1228] && *((_DWORD *)v3 + 15) != 2
      || v6[1149]
      || (unsigned int)(*((_DWORD *)v3 + 15) - 1) > 1 )
    {
      goto LABEL_51;
    }
    v13 = 2 * *((unsigned __int8 *)v3 + 56) + 7;
    if ( *((_BYTE *)v3 + 56) )
      v6[1151] = 1;
    v30 = v6;
    if ( !ptrace(v13, *((unsigned int *)v3 + 10), 0, *((int *)v3 + 13)) )
      goto LABEL_48;
    if ( *((_DWORD *)v3 + 15) == 2 )
      goto LABEL_50;
    qsnprintf(v34, 4096, "/proc/%u/status", *((_DWORD *)v3 + 10));
    v14 = fopenRT(v34);
    if ( !v14 )
    {
      result = 0;
      goto LABEL_10;
    }
    *(_OWORD *)s1 = 0;
    v33 = 0;
    v26 = v14;
    v31 = qgetline(s1, v14);
    if ( v31 < 0 )
      goto LABEL_42;
    v15 = v26;
    if ( s1[1] < &byte_7 || (v27 = s1[0], v16 = strncmp(s1[0], "State:", 6u), v15 = v26, v16) )
    {
      v31 = qgetline(s1, v15);
      if ( v31 < 0 )
        goto LABEL_42;
      v15 = v26;
      if ( s1[1] < &byte_7 || (v27 = s1[0], v17 = strncmp(s1[0], "State:", 6u), v15 = v26, v17) )
      {
        v31 = qgetline(s1, v15);
        if ( v31 >= 0 && s1[1] >= &byte_7 )
        {
          v27 = s1[0];
          v18 = strncmp(s1[0], "State:", 6u);
          v15 = v26;
          if ( v18 )
            goto LABEL_43;
          goto LABEL_38;
        }
LABEL_42:
        v15 = v26;
        goto LABEL_43;
      }
    }
LABEL_38:
    v19 = v27[6];
    if ( v19 )
    {
      v20 = v27 + 7;
      while ( 1 )
      {
        v28 = v20;
        if ( !isspace(v19) )
          break;
        v19 = *v28;
        v20 = v28 + 1;
        if ( !*v28 )
          goto LABEL_42;
      }
      qfclose(v26);
      v10 = *(v28 - 1);
      v6 = v30;
LABEL_44:
      if ( s1[0] )
      {
        v29 = v10;
        s1[1] = nullptr;
        qfree(s1[0]);
        s1[0] = nullptr;
        v33 = 0;
        v6 = v30;
        v10 = v29;
      }
      result = 0;
      if ( v10 != 90 )
        goto LABEL_52;
      sub_3A390((__int64)v6, *((_DWORD *)v3 + 10), 2);
LABEL_48:
      v21 = *((_DWORD *)v3 + 15);
      if ( v21 == 1 )
      {
        *((_DWORD *)v3 + 15) = 0;
LABEL_9:
        result = v11;
LABEL_10:
        v6 = v30;
        goto LABEL_52;
      }
      if ( v21 != 2 )
      {
        if ( !(_BYTE)under_debugger )
          interr(30178);
        goto LABEL_67;
      }
LABEL_50:
      *((_DWORD *)v3 + 15) = 3;
      goto LABEL_9;
    }
LABEL_43:
    qfclose(v15);
    v10 = 32;
    v6 = v30;
    if ( v31 >= 0 )
    {
      if ( !(_BYTE)under_debugger )
        interr(30060);
      goto LABEL_67;
    }
    goto LABEL_44;
  }
  return 1;
}
// 7: using guessed type char;
// 158B40: using guessed type __int64 under_debugger;
