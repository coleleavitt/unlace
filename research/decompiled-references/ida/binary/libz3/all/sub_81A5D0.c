__int64 __fastcall sub_81A5D0(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  void (*v4)(void); // rax
  int v5; // ecx
  _DWORD *v6; // r13
  unsigned int v7; // r12d
  int v8; // edx
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  int *v12; // r14
  __int64 v14; // r10
  int *(__fastcall *v15)(__int64, unsigned int, unsigned int); // rax
  int *v16; // rax
  int v17; // esi
  int v18; // edi
  int v19; // esi
  _DWORD *v20; // r10
  _DWORD *v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // r15d
  unsigned int v24; // r14d
  __int64 v25; // r12
  unsigned __int64 v26; // r15
  unsigned int v27; // r13d
  _DWORD *v29; // r12
  int v30; // edx
  _DWORD *v31; // r13
  __int64 v32; // rdx
  unsigned int v33; // [rsp+8h] [rbp-60h]
  unsigned int v34; // [rsp+8h] [rbp-60h]
  unsigned int v35; // [rsp+Ch] [rbp-5Ch]
  int v36; // [rsp+10h] [rbp-58h]
  int v37; // [rsp+14h] [rbp-54h]
  _DWORD *v38; // [rsp+18h] [rbp-50h]
  _DWORD *v39; // [rsp+20h] [rbp-48h]

  v3 = a2;
  v4 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v4 == (char *)sub_81A570 )
  {
    v5 = a1[17];
    a1[5] = -2;
    v6 = a1 + 19;
    v7 = 0;
    if ( v5 )
    {
      do
      {
        v8 = v6[1];
        ++v7;
        v6 += 2;
        sub_7E4390((__int64)a1, a2, v8);
      }
      while ( v7 < a1[17] );
    }
    a1[17] = 0;
  }
  else
  {
    v4();
  }
  if ( a1[4] != -2 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) == -1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 104LL))(a1);
    if ( a1[4] != -2 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 132);
    }
  }
  v33 = a1[8];
  v35 = a1[15];
  if ( v33 )
  {
    v9 = 0;
    v10 = 0;
    v38 = a1 + 19;
    v11 = 0;
    v12 = a1 + 19;
    v36 = 0;
    v37 = 0;
    v39 = a1 + 19;
    do
    {
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, (unsigned int)v12[1]) != -1 )
      {
        v14 = v9;
        if ( v9 != v10 )
        {
          v15 = *(int *(__fastcall **)(__int64, unsigned int, unsigned int))(*(_QWORD *)a1 + 80LL);
          if ( v15 == sub_7C5580 )
          {
            v16 = &a1[2 * v9 + 19];
            v17 = *v12;
            *v12 = *v16;
            v18 = a1[2 * v9 + 20];
            *v16 = v17;
            v19 = v12[1];
            v12[1] = v18;
            v16[1] = v19;
          }
          else
          {
            v15((__int64)a1, v10, v9);
            v14 = v9;
          }
        }
        if ( v35 >= v11 )
        {
          ++v36;
          v11 += a1[2 * v14 + 19];
        }
        else
        {
          v37 += a1[2 * v14 + 19];
        }
        ++v9;
      }
      ++v10;
      v12 += 2;
    }
    while ( v33 != v10 );
    v20 = v38;
    v3 = a2;
    v21 = v39;
    if ( v11 < v35 )
    {
      v22 = v9;
      v23 = v9 + 1;
      v24 = a1[2 * v22 + 20];
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v24) != -1 )
      {
        sub_1872CE0("");
        sub_1873130(114, 163);
      }
      if ( v23 < v33 )
      {
        v25 = (__int64)&a1[2 * v23 + 19];
        v26 = (unsigned __int64)&a1[2 * (v33 - 1 - v23) + 21 + 2 * (unsigned __int64)v23];
        do
        {
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, v24);
          if ( v27 < (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(
                       v3,
                       *(unsigned int *)(v25 + 4)) )
            v24 = *(_DWORD *)(v25 + 4);
          v25 += 8;
        }
        while ( v26 != v25 );
      }
LABEL_29:
      (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v3 + 112LL))(v3, a1, v24);
      return 0;
    }
    if ( v36 )
    {
      v34 = v11;
      v29 = v39;
      do
      {
        v30 = v29[1];
        v29 += 2;
        sub_7E4540((__int64)a1, a2, v30);
      }
      while ( &v39[2 * v36] != v29 );
      v11 = v34;
      v20 = v38;
      v21 = v39;
    }
    a1[16] = v11;
    a1[17] = v36;
    if ( v37 + v11 == v35 && v9 )
    {
      v31 = v20;
      do
      {
        v32 = (unsigned int)v31[1];
        v31 += 2;
        (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v3 + 104LL))(v3, a1, v32);
      }
      while ( &v21[2 * v9] != v31 );
    }
  }
  else
  {
    if ( v35 )
    {
      v24 = a1[20];
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v24) != -1 )
      {
        sub_1872CE0("");
        sub_1873130(114, 163);
      }
      goto LABEL_29;
    }
    *((_QWORD *)a1 + 8) = 0;
  }
  return 1;
}

