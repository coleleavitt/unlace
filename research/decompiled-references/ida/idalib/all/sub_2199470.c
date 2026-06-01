__int64 __fastcall sub_2199470(_QWORD *a1, __int64 a2)
{
  size_t v2; // r15
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64, unsigned int); // rax
  size_t v5; // rax
  unsigned int v6; // ebp
  _BOOL4 v8; // eax
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  size_t v10; // [rsp+8h] [rbp-50h]
  char v11; // [rsp+10h] [rbp-48h]

  v2 = 16;
  v3 = *(_QWORD *)(a1[10] + 8LL * (unsigned int)a2);
  if ( !*(_BYTE *)(v3 + 31) )
    v2 = strlen((const char *)(v3 + 16));
  v4 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*a1 + 144LL);
  if ( v4 == sub_21965A0 )
  {
    v5 = 16;
    if ( !*(_BYTE *)(v3 + 15) )
      v5 = strlen((const char *)v3);
    v11 &= ~1u;
    v9 = v3;
    v10 = v5;
  }
  else
  {
    v4((__int64)&v9, (__int64)a1, a2);
    if ( (v11 & 1) != 0 )
    {
      v6 = 0;
      sub_111DFC0(&v9);
      return v6;
    }
  }
  v6 = 0;
  if ( v2 == 6 )
  {
    if ( *(_DWORD *)(v3 + 16) == 1280073567 && *(_WORD *)(v3 + 20) == 19798 )
    {
      if ( v10 == 9 )
      {
        v8 = *(_QWORD *)v9 != 0x646F637469625F5FLL || *(_BYTE *)(v9 + 8) != 101;
        LOBYTE(v6) = !v8;
      }
    }
    else
    {
      v6 = 0;
    }
  }
  sub_111DFC0(&v9);
  return v6;
}
