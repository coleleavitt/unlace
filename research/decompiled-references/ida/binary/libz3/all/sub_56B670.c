__int64 __fastcall sub_56B670(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v19[40]; // [rsp+10h] [rbp-28h] BYREF

  sub_644D80(v19, "fetch_fact", 2);
  if ( *(_DWORD *)(a1 + 24) )
  {
    sub_56B5A0(a1, *a2);
    v18 = *(_QWORD *)(a1 + 152);
    v6 = sub_570B70(a1 + 96, &v18);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 - 4);
        v9 = *(_DWORD *)(a1 + 24);
        v10 = v8 - v9;
        if ( v8 >= v9 )
        {
          v11 = *(_QWORD *)(a1 + 40);
          v12 = *(_QWORD *)(v6 + 8) + *(_QWORD *)(a1 + 88);
          v13 = (__int64)&(*a2)[v10];
          v14 = (unsigned int *)(v11 + 32 * v10);
          v15 = v11 + 32 * (v9 - 1 + v10) + 32;
          do
          {
            v16 = *v14;
            v17 = v14[1];
            v14 += 8;
            v13 += 8;
            *(_QWORD *)(v13 - 8) = *((_QWORD *)v14 - 3) & (*(_QWORD *)(v12 + v16) >> v17);
          }
          while ( (unsigned int *)v15 != v14 );
        }
      }
      v4 = 1;
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a1 + 56LL))(a1, a2);
  }
  sub_644EE0(v19);
  return v4;
}

