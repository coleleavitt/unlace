__int64 __fastcall sub_F0E0(_QWORD *a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 *func; // rax
  unsigned __int64 *v7; // r15
  __int64 v8; // r9
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rsi
  unsigned __int64 *v17; // rax
  unsigned __int8 v18; // al
  int v19; // edx
  unsigned int *v20; // rax
  unsigned int *v21; // rsi
  unsigned __int64 v22; // rdx
  int v23; // r12d
  unsigned int v24; // r14d
  __int64 v25; // r13
  _DWORD *v27; // r13
  char v28; // [rsp+0h] [rbp-558h]
  __int64 v29; // [rsp+10h] [rbp-548h]
  int v30; // [rsp+18h] [rbp-540h]
  _BOOL4 v31; // [rsp+1Ch] [rbp-53Ch]
  int v32; // [rsp+2Ch] [rbp-52Ch] BYREF
  int v33; // [rsp+30h] [rbp-528h] BYREF
  int v34; // [rsp+34h] [rbp-524h] BYREF
  __int64 v35; // [rsp+38h] [rbp-520h] BYREF
  _QWORD v36[26]; // [rsp+40h] [rbp-518h] BYREF
  _BYTE v37[1032]; // [rsp+110h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+518h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func(a2);
  if ( !func )
    goto LABEL_37;
  v7 = func;
  memset(v36, 0, 0xC8u);
  if ( netnode_supval(a1[20], *func, &v35, 4, 333) <= 3 )
    goto LABEL_37;
  v9 = (unsigned __int64 *)a1[17];
  v10 = 0xFFFFFFFFLL;
  v11 = (unsigned int)v35;
  v12 = *v7;
  v13 = 8LL * a1[18];
  v14 = (__int64)v9 + v13;
  if ( v13 )
  {
    v10 = 0;
    while ( v12 >= *v9 )
    {
      ++v9;
      v13 = (unsigned int)(v10 + 1);
      if ( v9 == (unsigned __int64 *)v14 )
        goto LABEL_9;
      v10 = (unsigned int)v13;
    }
    v10 = (unsigned int)(v10 - 1);
  }
LABEL_9:
  if ( v10 < a1[22] )
  {
    v15 = (unsigned int)v35;
    if ( netnode_supval(*(_QWORD *)(a1[21] + 8 * v10), (unsigned int)v35, v36, 200, 77) <= 199 )
      goto LABEL_37;
    v10 = (unsigned __int64)v37;
    v16 = a1[18];
    memset(v37, 0, 0x400u);
    v17 = (unsigned __int64 *)a1[17];
    v12 = 8 * v16;
    v13 = 0xFFFFFFFFLL;
    v14 = (__int64)v17 + v12;
    if ( v12 )
    {
      v13 = 0;
      while ( a2 >= *v17 )
      {
        ++v17;
        LODWORD(v12) = v13 + 1;
        if ( (unsigned __int64 *)v14 == v17 )
          goto LABEL_17;
        v13 = (unsigned int)v12;
      }
      v13 = (unsigned int)(v13 - 1);
    }
LABEL_17:
    if ( v13 < a1[22] )
    {
      if ( (int)netnode_supval(*(_QWORD *)(a1[21] + 8 * v13), v15, v37, 1024, 89) <= 1 )
        return 0;
      v18 = 127;
      if ( v37[0] <= 0x7Fu )
        v18 = v37[0];
      v19 = v18;
      if ( !v37[0] )
        return 0;
      v20 = (unsigned int *)&v37[1];
      v21 = (unsigned int *)&v37[8 * (v19 - 1) + 9];
      while ( 1 )
      {
        v22 = *v20;
        if ( a2 >= v22 && a2 < (unsigned int)v22 + 2 * *((unsigned __int16 *)v20 + 2) )
          break;
        v20 += 2;
        if ( v20 == v21 )
          return 0;
      }
      v23 = v36[21];
      v35 = v36[24] + *((unsigned __int16 *)v20 + 3);
      if ( !sub_C0E0(&v32, &v35, 1) )
        return 0;
      v30 = v32;
      if ( v32 < 0 )
      {
        v31 = 1;
        v30 = -v32;
        v32 = -v32;
      }
      else
      {
        v31 = v32 == 0;
      }
      v24 = v31 + v30;
      v29 = qcalloc(v31 + v30, 8);
      if ( v29 )
      {
        if ( v30 > 0 )
        {
          v25 = v29;
          while ( sub_C0E0(&v33, &v35, 0) && sub_C0E0(&v34, &v35, 0) )
          {
            v25 += 8;
            *(_DWORD *)(v25 - 8) = v33;
            *(_DWORD *)(v25 - 4) = v23 + 2 * v34;
            if ( v29 + 8LL * v30 == v25 )
              goto LABEL_41;
          }
          goto LABEL_35;
        }
LABEL_41:
        if ( v31 )
        {
          v27 = (_DWORD *)(v29 + 8LL * v30);
          *v27 = -1;
          if ( !sub_C0E0(&v34, &v35, 0) )
          {
LABEL_35:
            qfree(v29, (const char *)&v35);
            return 0;
          }
          v27[1] = v23 + 2 * v34;
        }
        *a3 = v29;
        return v24;
      }
      sub_BBF0((__int64)"ERROR: not enough memory for CatchHandlerList (%d elements).\n", v24);
LABEL_37:
      *a3 = 0;
      return 0;
    }
  }
  sub_BBD0(v14, v12, v10, v13, v11, v8, v28);
  return sub_F4C0();
}
