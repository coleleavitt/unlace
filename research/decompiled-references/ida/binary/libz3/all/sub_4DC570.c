void __fastcall sub_4DC570(unsigned int *a1, int a2, _BYTE *a3, char *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebp
  unsigned __int8 **v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int8 **v13; // rsi
  unsigned __int8 **v14; // rbx
  _DWORD *v15; // rbp
  int v16; // edx
  int v17; // edx
  void *v18; // rax
  _QWORD *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned __int8 **v25; // r9
  unsigned __int8 **v26; // rbx
  unsigned __int8 **v27; // rdx
  int v28; // edi
  __int64 v29; // rdx
  unsigned __int8 **v30; // rsi
  _DWORD *v31; // rdx
  int v32; // esi
  unsigned __int8 **v33; // r14
  unsigned __int8 **v34; // rdi
  unsigned __int8 **v35; // [rsp+0h] [rbp-88h]
  unsigned __int8 **v36; // [rsp+0h] [rbp-88h]
  unsigned int v37; // [rsp+Ch] [rbp-7Ch]
  __int64 v38; // [rsp+18h] [rbp-70h]
  void *v40[2]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v41[10]; // [rsp+38h] [rbp-50h] BYREF

  v40[0] = v41;
  if ( (unsigned __int64)a4 > 0xF )
  {
    if ( (__int64)a4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (__int64)(a4 + 1) < 0 )
      std::__throw_bad_alloc();
    v18 = (void *)operator new((unsigned __int64)(a4 + 1));
    v41[0] = a4;
    v40[0] = v18;
    v19 = v18;
    goto LABEL_34;
  }
  if ( a4 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v41[0]) = *a3;
    goto LABEL_4;
  }
  if ( a4 )
  {
    v19 = v41;
LABEL_34:
    memcpy(v19, a3, (size_t)a4);
    v7 = v40[0];
    goto LABEL_5;
  }
LABEL_4:
  v7 = v41;
LABEL_5:
  v40[1] = a4;
  a4[(_QWORD)v7] = 0;
  v8 = a1[2];
  v9 = 2 * v8;
  if ( 3 * (int)v8 < 4 * (a1[3] + a1[4]) )
  {
    v20 = 48LL * v9;
    v38 = v20;
    v21 = sub_186B270(v20);
    v10 = (unsigned __int8 **)v21;
    if ( v9 )
    {
      v22 = (_QWORD *)v21;
      do
      {
        v23 = v22 + 4;
        *v22 = 0;
        v22 += 6;
        *(v22 - 4) = v23;
        *(v22 - 3) = 0;
        *((_BYTE *)v22 - 16) = 0;
      }
      while ( v22 != (_QWORD *)(v21 + 48LL * v9) );
    }
    v11 = v21 + v20;
    v37 = v9 - 1;
    v24 = a1[2];
    v25 = (unsigned __int8 **)(*(_QWORD *)a1 + 16LL);
    v26 = (unsigned __int8 **)(*(_QWORD *)a1 + 48 * v24);
    if ( *(unsigned __int8 ***)a1 != v26 )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v25 - 3) == 2 )
        {
          v28 = *((_DWORD *)v25 - 4);
          v29 = 48LL * (v28 & v37);
          v30 = &v10[(unsigned __int64)v29 / 8];
          if ( v20 == v29 )
          {
LABEL_58:
            if ( v10 == v30 )
            {
LABEL_65:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v31 = v10;
            while ( v31[1] )
            {
              v31 += 12;
              if ( v30 == (unsigned __int8 **)v31 )
                goto LABEL_65;
            }
          }
          else
          {
            v31 = &v10[(unsigned __int64)v29 / 8];
            while ( v31[1] )
            {
              v31 += 12;
              if ( (_DWORD *)v11 == v31 )
                goto LABEL_58;
            }
          }
          *v31 = v28;
          v32 = *((_DWORD *)v25 - 2);
          v31[1] = 2;
          v31[2] = v32;
          v35 = v25;
          sub_4D9860((__int64)(v31 + 4), v25);
          v27 = v35 + 6;
          if ( v26 == v35 + 4 )
          {
LABEL_48:
            v24 = a1[2];
            v26 = *(unsigned __int8 ***)a1;
            break;
          }
        }
        else
        {
          v27 = v25 + 6;
          if ( v26 == v25 + 4 )
            goto LABEL_48;
        }
        v25 = v27;
      }
    }
    if ( v26 )
    {
      if ( (_DWORD)v24 )
      {
        v33 = v26;
        v36 = &v26[6 * v24];
        do
        {
          v34 = (unsigned __int8 **)v33[2];
          if ( v34 != v33 + 4 )
            operator delete(v34, (unsigned __int64)(v33[4] + 1));
          v33 += 6;
        }
        while ( v33 != v36 );
      }
      sub_186B220(v26);
    }
    *(_QWORD *)a1 = v10;
    a1[2] = v9;
    a1[4] = 0;
  }
  else
  {
    v10 = *(unsigned __int8 ***)a1;
    v37 = v8 - 1;
    v38 = 48 * v8;
    v11 = *(_QWORD *)a1 + 48 * v8;
  }
  v12 = a2 & v37;
  v13 = &v10[6 * v12];
  if ( 48 * v12 != v38 )
  {
    v14 = &v10[6 * v12];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = *((_DWORD *)v14 + 1);
      if ( v16 == 2 )
      {
        if ( a2 == *(_DWORD *)v14 && a2 == *((_DWORD *)v14 + 2) )
        {
          *((_DWORD *)v14 + 2) = a2;
          sub_4D9860((__int64)(v14 + 2), (unsigned __int8 **)v40);
          *((_DWORD *)v14 + 1) = 2;
          goto LABEL_28;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_26;
          v15 = v14;
          goto LABEL_27;
        }
        v15 = v14;
      }
      v14 += 6;
      if ( v14 == (unsigned __int8 **)v11 )
        goto LABEL_19;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_19:
    if ( v13 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = *((_DWORD *)v10 + 1);
    if ( v17 != 2 )
      break;
    if ( a2 == *(_DWORD *)v10 && a2 == *((_DWORD *)v10 + 2) )
    {
      *((_DWORD *)v10 + 2) = a2;
      sub_4D9860((__int64)(v10 + 2), (unsigned __int8 **)v40);
      *((_DWORD *)v10 + 1) = 2;
      goto LABEL_28;
    }
LABEL_18:
    v10 += 6;
  }
  if ( v17 )
  {
    v15 = v10;
    goto LABEL_18;
  }
  if ( v15 )
LABEL_26:
    --a1[4];
  else
    v15 = v10;
LABEL_27:
  v15[2] = a2;
  sub_4D9860((__int64)(v15 + 4), (unsigned __int8 **)v40);
  v15[1] = 2;
  *v15 = a2;
  ++a1[3];
LABEL_28:
  if ( v40[0] != v41 )
    operator delete(v40[0], v41[0] + 1LL);
}

