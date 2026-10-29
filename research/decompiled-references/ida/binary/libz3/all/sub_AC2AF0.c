__int64 __fastcall sub_AC2AF0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r14d
  int v19; // r8d
  _QWORD **v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rsi
  _QWORD **v25; // r14
  char v26; // r13
  __int64 i; // rax
  int v28; // eax
  int v29; // eax
  char v30; // al
  __int64 v31; // r14
  unsigned int v32; // r12d
  __int64 v33; // rbx
  char v34; // al
  _QWORD *v35; // rbp
  _QWORD *v36; // r12
  char v37; // r14
  _DWORD *v38; // rdx
  _DWORD *v39; // rdx
  __int64 v42; // [rsp+10h] [rbp-88h]
  char v43; // [rsp+18h] [rbp-80h]
  char v44; // [rsp+1Fh] [rbp-79h]
  char v45; // [rsp+20h] [rbp-78h]
  __int64 v46; // [rsp+20h] [rbp-78h]
  __int64 v47; // [rsp+28h] [rbp-70h]
  int v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  __int64 v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+48h] [rbp-50h] BYREF
  __int64 v52[9]; // [rsp+50h] [rbp-48h] BYREF

  v5 = (_QWORD *)a1;
  result = sub_ABC7C0((_QWORD *)a1, a2, a3);
  if ( !(_BYTE)result )
    return result;
  v7 = *(_QWORD *)(a1 + 1152);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * a4);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 - 4);
    if ( v9 )
      goto LABEL_6;
  }
  v20 = *(_QWORD ***)(a1 + 544);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 )
    {
      v22 = *(_QWORD *)(a1 + 32);
      v52[0] = a1;
      v23 = *(_QWORD *)(v22 + 8LL * a2);
      v52[1] = (__int64)&v51;
      v51 = v23;
      if ( (unsigned int)v21 < *(_DWORD *)(v23 + 32) )
      {
        v24 = v23;
        v25 = &v20[v21];
        v26 = result;
        for ( i = v24; ; i = v51 )
        {
          if ( (*v20)[1] == *(_QWORD *)(i + 8) )
            sub_ABC150(v52, *v20);
          if ( v25 == ++v20 )
            break;
        }
        LOBYTE(result) = v26;
        v9 = 0;
        goto LABEL_6;
      }
      v35 = (_QWORD *)v23;
      v36 = nullptr;
      v37 = result;
      while ( (_QWORD *)v23 == v36 )
      {
        if ( v35 == (_QWORD *)v23 )
        {
          LOBYTE(result) = v37;
          goto LABEL_33;
        }
        if ( !*(_WORD *)(*v35 + 4LL) )
        {
          v39 = *(_DWORD **)(*(_QWORD *)(*v35 + 16LL) + 24LL);
          if ( v39 )
          {
            if ( *(_DWORD *)(a1 + 80) == *v39 && v39[1] == 66 )
              goto LABEL_69;
          }
        }
LABEL_62:
        v35 = (_QWORD *)v35[2];
      }
      if ( !*(_WORD *)(*v35 + 4LL) )
      {
        v38 = *(_DWORD **)(*(_QWORD *)(*v35 + 16LL) + 24LL);
        if ( v38 )
        {
          if ( *v38 == *(_DWORD *)(a1 + 80) && v38[1] == 66 )
LABEL_69:
            sub_ABC150(v52, v35);
        }
      }
      if ( !v36 )
        v36 = v35;
      goto LABEL_62;
    }
  }
LABEL_33:
  v9 = 0;
LABEL_6:
  if ( !v9 )
    return sub_AC25F0(v5);
  v44 = result;
  v42 = v9;
  while ( 2 )
  {
    v10 = 0;
    v11 = (__int64)v5;
    v45 = 0;
    do
    {
      v12 = *(_QWORD *)(v11 + 504);
      v13 = *(_DWORD *)(*(_QWORD *)(v12 + 8LL * a5) + 4 * v10);
      v14 = *(_DWORD *)(*(_QWORD *)(v12 + 8LL * a4) + 4 * v10);
      v15 = v13 ^ 1;
      if ( v14 == (v13 ^ 1) )
        return sub_AB99C0(v11, a4, a5, v10);
      v16 = *(_QWORD *)(v11 + 16);
      v17 = *(_QWORD *)(v16 + 8848);
      v18 = *(char *)(v17 + v14);
      v19 = *(char *)(v17 + v13);
      if ( !*(_BYTE *)(v17 + v14) )
      {
        v48 = *(char *)(v17 + v13);
        v50 = *(_QWORD *)(v11 + 16);
        v49 = *(_QWORD *)(*(_QWORD *)(v16 + 8840) + 8LL * (v14 >> 1));
        v29 = sub_8E7030(v50);
        v15 = v13 ^ 1;
        v19 = v48;
        if ( !v29
          || (v30 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v50 + 7488) + 56LL))(
                      *(_QWORD *)(v50 + 7488),
                      v49),
              v15 = v13 ^ 1,
              v19 = v48,
              v30) )
        {
          if ( !v19 )
            goto LABEL_49;
        }
        else
        {
          sub_9936C0(*(_QWORD *)(v11 + 16), v14 >> 1);
          v19 = v48;
          v15 = v13 ^ 1;
          if ( !v48 )
          {
LABEL_49:
            v31 = *(_QWORD *)(v11 + 16);
            v32 = v13 >> 1;
            v33 = *(_QWORD *)(*(_QWORD *)(v31 + 8840) + 8LL * v32);
            if ( (unsigned int)sub_8E7030(v31)
              && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v31 + 7488) + 56LL))(
                    *(_QWORD *)(v31 + 7488),
                    v33) )
            {
              sub_9936C0(*(_QWORD *)(v11 + 16), v32);
            }
            goto LABEL_44;
          }
        }
        v43 = 0;
        goto LABEL_37;
      }
      if ( *(_BYTE *)(v17 + v13) )
      {
        if ( v18 == v19 )
          goto LABEL_44;
        if ( v13 != dword_1C7ECF0 && v13 != dword_1C7ECF4 )
        {
          v43 = v44;
LABEL_29:
          if ( v18 == -1 )
          {
            v14 ^= 1u;
            v13 = v15;
          }
          sub_AC2100(v11, v13, a4, a5, v10, v14, 1);
          goto LABEL_40;
        }
        v43 = v44;
LABEL_37:
        if ( v19 == -1 )
        {
          v14 ^= 1u;
          v13 = v15;
        }
        sub_AC2100(v11, v14, a5, a4, v10, v13, 1);
        goto LABEL_40;
      }
      v47 = *(_QWORD *)(v11 + 16);
      v46 = *(_QWORD *)(*(_QWORD *)(v16 + 8840) + 8LL * (v13 >> 1));
      v28 = sub_8E7030(v47);
      v15 = v13 ^ 1;
      if ( !v28
        || (v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v47 + 7488) + 56LL))(
                    *(_QWORD *)(v47 + 7488),
                    v46),
            v15 = v13 ^ 1,
            v34) )
      {
        if ( v13 == dword_1C7ECF0 )
          goto LABEL_54;
      }
      else
      {
        sub_9936C0(*(_QWORD *)(v11 + 16), v13 >> 1);
        v15 = v13 ^ 1;
        if ( v13 == dword_1C7ECF0 )
          goto LABEL_54;
      }
      if ( v13 != dword_1C7ECF4 )
      {
        v43 = 0;
        goto LABEL_29;
      }
LABEL_54:
      v43 = 0;
LABEL_40:
      result = *(_QWORD *)(v11 + 16);
      if ( *(_QWORD *)(result + 8984) != qword_1C7ECE8 || *(_BYTE *)(result + 2416) )
        return result;
      if ( v43 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1603);
      }
      v45 = v44;
LABEL_44:
      ++v10;
    }
    while ( v10 != v42 );
    v5 = (_QWORD *)v11;
    if ( v45 )
      continue;
    return sub_AC25F0(v5);
  }
}

