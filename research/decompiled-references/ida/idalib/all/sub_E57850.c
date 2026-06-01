void __fastcall sub_E57850(__int64 *a1, unsigned int a2, __int64 a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v9; // eax
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rdi
  _BYTE *v15; // rax
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  _BYTE *v20; // rax
  __int64 v21; // rax
  __int64 *v22[4]; // [rsp+8h] [rbp-20h] BYREF

  v9 = *(_DWORD *)a3;
  v22[0] = a1;
  if ( v9 > 2 )
  {
    if ( v9 == 3 )
    {
      if ( *(_BYTE *)(a3 + 24) )
      {
        sub_E39C40(v22, a2);
      }
      else
      {
        v12 = a1[1];
        v13 = *(_BYTE **)(v12 + 32);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
        {
          sub_227BA10(v12, 81);
        }
        else
        {
          *(_QWORD *)(v12 + 32) = v13 + 1;
          *v13 = 81;
        }
        sub_E486B0((__int64)a1, *(unsigned __int16 **)(a3 + 8), (unsigned __int16 *)0xFFFFFFFFLL, 0, a6, a7);
      }
    }
  }
  else if ( v9 )
  {
    if ( *(_DWORD *)(a3 + 40) == 1 )
    {
      sub_E39C40(v22, *(_DWORD *)((*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFFCLL) + 16));
    }
    else
    {
      v14 = a1[1];
      v15 = *(_BYTE **)(v14 + 32);
      if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 24) )
      {
        sub_227BA10(v14, 88);
      }
      else
      {
        *(_QWORD *)(v14 + 32) = v15 + 1;
        *v15 = 88;
      }
      sub_E486B0(
        (__int64)a1,
        (unsigned __int16 *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFFCLL),
        (unsigned __int16 *)0xFFFFFFFFLL,
        0,
        a6,
        a7);
      if ( *(_DWORD *)(a3 + 16) )
      {
        v16 = a1[1];
        v17 = *(_BYTE **)(v16 + 32);
        if ( (unsigned __int64)v17 >= *(_QWORD *)(v16 + 24) )
        {
          sub_227BA10(v16, 78);
        }
        else
        {
          *(_QWORD *)(v16 + 32) = v17 + 1;
          *v17 = 78;
        }
      }
      v18 = *(_QWORD *)(a3 + 24);
      if ( (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v18 & 4) != 0 )
        {
          sub_E39C40(v22, *(_DWORD *)((*(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF8LL) + 16));
        }
        else
        {
          v19 = a1[1];
          v20 = *(_BYTE **)(v19 + 32);
          if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
          {
            sub_227BA10(v19, 82);
          }
          else
          {
            *(_QWORD *)(v19 + 32) = v20 + 1;
            *v20 = 82;
          }
          v21 = sub_C0F1A0((_QWORD *)(a3 + 24));
          sub_E4E2E0(a1, v21, a4);
        }
      }
    }
  }
  else if ( *(_DWORD *)(a3 + 16) == 1 )
  {
    sub_E39C40(v22, *(_DWORD *)((*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 16));
  }
  else
  {
    v10 = a1[1];
    v11 = *(_BYTE **)(v10 + 32);
    if ( *(_QWORD *)(v10 + 24) <= (unsigned __int64)v11 )
    {
      sub_227BA10(v10, 84);
    }
    else
    {
      *(_QWORD *)(v10 + 32) = v11 + 1;
      *v11 = 84;
    }
    sub_E3FB80(a1, *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL));
  }
}
