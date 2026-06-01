void __fastcall sub_9AE5E0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // [rsp+8h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+10h] [rbp-28h] BYREF
  _DWORD *v10; // [rsp+18h] [rbp-20h] BYREF

  v3 = *(_DWORD **)(a1 + 48);
  v4 = *(_QWORD *)a1;
  v9 = v3;
  if ( v3 )
    ++v3[17];
  v5 = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
  v6 = (_QWORD *)(*(_QWORD *)(v4 + 448) + 16 * v5);
  if ( a2 == *v6 )
  {
    v7 = (_DWORD *)v6[1];
    *(_DWORD *)(a1 + 56) = v5;
    if ( v7 )
      ++v7[17];
  }
  else
  {
    v9 = nullptr;
    v7 = v3;
  }
  *(_QWORD *)(a1 + 48) = v7;
  v8 = v3;
  v10 = nullptr;
  sub_9AE1E0(&v8);
  sub_9AE1E0(&v10);
  sub_9AE1E0(&v9);
  sub_9A9BF0(*(_QWORD *)a1, (unsigned __int16 **)(a1 + 8), *(_QWORD *)(a2 + 16), 1u, 1u);
}

