/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_664D0
// Address: 0x00000000000664D0

//----- (00000000000664D0) ----------------------------------------------------
__int64 __fastcall sub_664D0(__int64 a1, const char *a2, char a3, int a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, const char *, __int64, _QWORD); // rdi
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int8 v12; // bl
  unsigned int v13; // edx
  unsigned __int8 v14; // si
  __int64 v15; // rbx
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // rsi
  unsigned __int16 v22; // ax
  char v23; // cl
  __int64 v24; // rbx
  __int64 v25; // rcx
  char *v26; // rax
  unsigned int v28; // [rsp+0h] [rbp-38h] BYREF
  int v29; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v7 = sub_64D00((_QWORD *)a1, a2, (int *)&v28);
  switch ( v28 )
  {
    case 0u:
    case 5u:
      v9 = *(__int64 (__fastcall ****)(_QWORD, const char *, __int64, _QWORD))(a1 + 416);
      if ( v9 )
      {
        v10 = (**v9)(v9, a2, v8, v28);
        if ( v10 != -1 )
        {
          sub_61AC0(a1, v10);
          return 0;
        }
      }
      set_error_string(0, a2);
      return 53;
    case 1u:
      v12 = (32 * (a3 ^ 1)) | 0x40;
      goto LABEL_11;
    case 2u:
      if ( a3 )
      {
        if ( !v7 )
        {
          v11 = 1539;
          if ( *(_QWORD *)(a1 + 184) )
            return v11;
        }
      }
      v12 = (32 * (a3 ^ 1)) | 0x50;
LABEL_11:
      v13 = (unsigned __int16)v7;
      v14 = v12;
      goto LABEL_44;
    case 3u:
      sub_61840(a1, 4 * a3 - 43, (unsigned __int16)v7);
      if ( a4 )
        goto LABEL_20;
      return 0;
    case 4u:
      if ( a3 )
      {
        if ( SHIDWORD(qword_154A68[0]) <= 0 )
          return 1611;
        *(_BYTE *)(a1 + 212) = -44;
        v15 = *(_QWORD *)(a1 + 200);
        v16 = *(_QWORD *)(v15 + 8);
        if ( *(_QWORD *)(v15 + 16) >= (unsigned __int64)(v16 + 1) )
        {
          v17 = *(char **)v15;
        }
        else
        {
          v17 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v15, v16 + 1, 1u);
          *(_QWORD *)v15 = v17;
          v16 = *(_QWORD *)(v15 + 8);
        }
        v17[v16] = -44;
        ++*(_QWORD *)(v15 + 8);
        ++*(_DWORD *)(a1 + 208);
        sub_61790(a1, a2, 0);
        v13 = WORD2(qword_154A68[0]);
      }
      else
      {
        if ( SLODWORD(qword_154A68[0]) <= 0 )
          return 1610;
        *(_BYTE *)(a1 + 212) = -86;
        v24 = *(_QWORD *)(a1 + 200);
        v25 = *(_QWORD *)(v24 + 8);
        if ( *(_QWORD *)(v24 + 16) >= (unsigned __int64)(v25 + 1) )
        {
          v26 = *(char **)v24;
        }
        else
        {
          v26 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v24, v25 + 1, 1u);
          *(_QWORD *)v24 = v26;
          v25 = *(_QWORD *)(v24 + 8);
        }
        v26[v25] = -86;
        ++*(_QWORD *)(v24 + 8);
        ++*(_DWORD *)(a1 + 208);
        sub_61790(a1, a2, 0);
        v13 = LOWORD(qword_154A68[0]);
      }
      v14 = 0;
LABEL_44:
      sub_61950(a1, v14, v13);
      if ( a4 )
      {
LABEL_20:
        if ( *(_QWORD *)(a1 + 48) )
          v21 = *(const char **)(a1 + 40);
        else
          v21 = s1;
        v22 = sub_64D00((_QWORD *)a1, v21, &v29);
        switch ( v29 )
        {
          case 3:
            v23 = 2 * (a4 <= 0) - 37;
            break;
          case 2:
            v23 = (4 * (a4 <= 0)) | 0xC2;
            break;
          case 1:
            v23 = (4 * (a4 <= 0)) | 0xC0;
            break;
          default:
            return (unsigned int)set_qerrno(0x3Au);
        }
        sub_61840(a1, v23, v22);
      }
      return 0;
    case 6u:
      v11 = 53;
      if ( a3 )
        return v11;
      sub_61790(a1, a2, 0);
      *(_BYTE *)(a1 + 212) = -82;
      v18 = *(_QWORD *)(a1 + 200);
      v19 = *(_QWORD *)(v18 + 8);
      if ( *(_QWORD *)(v18 + 16) >= (unsigned __int64)(v19 + 1) )
      {
        v20 = *(char **)v18;
      }
      else
      {
        v20 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v18, v19 + 1, 1u);
        *(_QWORD *)v18 = v20;
        v19 = *(_QWORD *)(v18 + 8);
      }
      v20[v19] = -82;
      ++*(_QWORD *)(v18 + 8);
      ++*(_DWORD *)(a1 + 208);
      if ( !a4 )
        return 0;
      goto LABEL_20;
    default:
      if ( !(_BYTE)under_debugger )
        interr(271);
      BUG();
  }
}
// 6652C: variable 'v8' is possibly undefined
// 154A68: using guessed type __int64 qword_154A68[3];
// 158B40: using guessed type __int64 under_debugger;
