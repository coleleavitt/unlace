void __fastcall sub_F1C7F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *v3; // rbx
  __int64 v4; // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_WORD *)(a2 + 2) >> 4 )
  {
    v2 = a2 + 8LL * ((unsigned int)(*(_WORD *)(a2 + 2) >> 4) - 1) + 32;
    v3 = (__int64 *)(a2 + 24);
    do
    {
      v4 = *v3++;
      v5[0] = v4;
      sub_F1C230(a1, v5);
    }
    while ( v3 != (__int64 *)v2 );
  }
}

