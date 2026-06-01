void __fastcall sub_E33B10(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7)
{
  unsigned int v9; // eax
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // rdi
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  _BYTE *v21; // rax
  __int64 v22; // rax
  __int64 *v23[4]; // [rsp+8h] [rbp-20h] BYREF

  v9 = *(_DWORD *)a3;
  v23[0] = a1;
  if ( v9 > 2 )
  {
    if ( v9 == 3 )
    {
      if ( *(_BYTE *)(a3 + 24) )
      {
        sub_E15F00(v23, a2);
      }
      else
      {
        v13 = a1[1];
        v14 = *(_BYTE **)(v13 + 32);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
        {
          sub_2257CD0(v13, 81);
        }
        else
        {
          *(_QWORD *)(v13 + 32) = v14 + 1;
          *v14 = 81;
        }
        sub_E24970((__int64)a1, *(unsigned __int16 **)(a3 + 8), (unsigned __int16 *)0xFFFFFFFFLL, 0, a5, a6);
      }
    }
  }
  else if ( v9 )
  {
    if ( *(_DWORD *)(a3 + 40) == 1 )
    {
      sub_E15F00(v23, *(_DWORD *)((*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFFCLL) + 16));
    }
    else
    {
      v15 = a1[1];
      v16 = *(_BYTE **)(v15 + 32);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(v15 + 24) )
      {
        sub_2257CD0(v15, 88);
      }
      else
      {
        *(_QWORD *)(v15 + 32) = v16 + 1;
        *v16 = 88;
      }
      sub_E24970(
        (__int64)a1,
        (unsigned __int16 *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFFCLL),
        (unsigned __int16 *)0xFFFFFFFFLL,
        0,
        a5,
        a6);
      if ( *(_DWORD *)(a3 + 16) )
      {
        v17 = a1[1];
        v18 = *(_BYTE **)(v17 + 32);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
        {
          sub_2257CD0(v17, 78);
        }
        else
        {
          *(_QWORD *)(v17 + 32) = v18 + 1;
          *v18 = 78;
        }
      }
      v19 = *(_QWORD *)(a3 + 24);
      if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v19 & 4) != 0 )
        {
          sub_E15F00(v23, *(_DWORD *)((*(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF8LL) + 16));
        }
        else
        {
          v20 = a1[1];
          v21 = *(_BYTE **)(v20 + 32);
          if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
          {
            sub_2257CD0(v20, 82);
          }
          else
          {
            *(_QWORD *)(v20 + 32) = v21 + 1;
            *v21 = 82;
          }
          v22 = sub_BEB460((_QWORD *)(a3 + 24));
          sub_E2A5A0(a1, v22, a7);
        }
      }
    }
  }
  else if ( *(_DWORD *)(a3 + 16) == 1 )
  {
    sub_E15F00(v23, *(_DWORD *)((*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 16));
  }
  else
  {
    v10 = a1[1];
    v11 = *(_BYTE **)(v10 + 32);
    if ( *(_QWORD *)(v10 + 24) <= (unsigned __int64)v11 )
    {
      sub_2257CD0(v10, 84);
    }
    else
    {
      v12 = (__int64)(v11 + 1);
      *(_QWORD *)(v10 + 32) = v11 + 1;
      *v11 = 84;
    }
    sub_E1BE40((__int64)a1, *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL), v12, a4, a5);
  }
}

