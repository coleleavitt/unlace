__int64 __fastcall sub_AE8580(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 *v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  bool v12; // zf
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // cl
  int v17; // ebp
  __int64 v18; // rdi
  unsigned int v19; // r14d
  __int64 v20; // rdi
  __int64 v21; // rbp
  char v22; // r15
  __int64 v23; // rdi
  char v24; // al
  void (***v25)(void); // rdi
  void (__fastcall ***v26)(_QWORD); // rbx
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  char v29; // [rsp+27h] [rbp-61h]
  void *v30; // [rsp+30h] [rbp-58h] BYREF
  int v31[2]; // [rsp+38h] [rbp-50h] BYREF
  int v32[2]; // [rsp+40h] [rbp-48h] BYREF
  int v33[2]; // [rsp+48h] [rbp-40h]

  v27 = *(_QWORD *)(a1 + 72);
  sub_8F7BA0(v27, a3, a4);
  v6 = sub_AC9710(*(_QWORD *)(a1 + 64), a2);
  v7 = *(_QWORD *)a1;
  *(_QWORD *)v33 = 0;
  *(_QWORD *)v32 = v7;
  v8 = sub_AE1190((__int64 *)a1, v6, (__int64 *)v32);
  if ( (_BYTE)v8 )
  {
    v14 = *(_QWORD *)(a1 + 72);
    v15 = *(_QWORD *)(v14 + 112);
    v16 = *(_BYTE *)(v15 + 420);
    *(_BYTE *)(v15 + 420) = 1;
    v28 = v15;
    v29 = v16;
    v17 = sub_8FD5F0(v14, 0, nullptr, 1u, a3, a4);
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(a1 + 72);
      v30 = nullptr;
      sub_8ECB50(v18, (void (****)(void))&v30);
      sub_AC9BC0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72), a2);
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_QWORD *)(a1 + 72);
        v21 = *(_QWORD *)(v20 + 112);
        v22 = *(_BYTE *)(v21 + 420);
        *(_BYTE *)(v21 + 420) = 1;
        if ( (unsigned int)sub_8FD5F0(v20, 0, nullptr, 1u, a3, a4) != 1 )
          break;
        v23 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)v31 = 0;
        sub_8ECB50(v23, (void (****)(void))v31);
        if ( !(unsigned __int8)sub_AE78E0((__int64 *)a1, a2, *(__int64 *)v31, (__int64)v32, 1)
          || (++v19, v19 >= *(_DWORD *)(a1 + 80)) )
        {
          v25 = *(void (****)(void))v31;
LABEL_25:
          if ( v25 )
          {
            v12 = (*((_DWORD *)v25 + 4))-- == 1;
            if ( v12 )
            {
              (**v25)();
              sub_186B220(v25);
            }
          }
          break;
        }
        v24 = sub_ADF670((__int64 *)a1, *(__int64 *)v31, (__int64)v32);
        v25 = *(void (****)(void))v31;
        if ( !v24 )
          goto LABEL_25;
        if ( *(_QWORD *)v31 )
        {
          v12 = (*(_DWORD *)(*(_QWORD *)v31 + 16LL))-- == 1;
          if ( v12 )
          {
            (**v25)();
            sub_186B220(v25);
          }
        }
        *(_BYTE *)(v21 + 420) = v22;
      }
      *(_BYTE *)(v21 + 420) = v22;
      if ( !v19 )
        sub_AE78E0((__int64 *)a1, a2, (__int64)v30, (__int64)v32, 0);
      v26 = (void (__fastcall ***)(_QWORD))v30;
      if ( v30 && (v12 = *((_DWORD *)v30 + 4) == 1, --*((_DWORD *)v30 + 4), v12) )
      {
        v8 = 0;
        (**v26)(v26);
        sub_186B220(v26);
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      LOBYTE(v17) = v17 == -1;
      v8 = sub_ADFA70((__int64 *)a1, a2) & v17;
    }
    *(_BYTE *)(v28 + 420) = v29;
  }
  v9 = *(__int64 **)v33;
  if ( *(_QWORD *)v33 )
  {
    v10 = *(_QWORD *)v33 + 8LL * *(unsigned int *)(*(_QWORD *)v33 - 4LL);
    if ( *(_QWORD *)v33 >= v10 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v9 >= v10 )
          goto LABEL_9;
      }
      sub_15D7BC0(*(_QWORD *)v32, v11);
      ++v9;
    }
    while ( (unsigned __int64)v9 < v10 );
LABEL_9:
    v9 = *(__int64 **)v33;
    if ( *(_QWORD *)v33 )
LABEL_10:
      sub_186B220(v9 - 1);
  }
  sub_8F96B0(v27, 1u);
  return v8;
}

