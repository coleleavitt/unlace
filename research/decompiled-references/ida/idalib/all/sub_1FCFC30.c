__int64 __fastcall sub_1FCFC30(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v4; // rdi
  void (*v5)(void); // rax
  __m128i *v6; // rax
  __int32 v7; // edx
  __int64 v8; // [rsp+0h] [rbp-40h]
  __m128i v9; // [rsp+8h] [rbp-38h] BYREF
  __int32 v10; // [rsp+18h] [rbp-28h]

  result = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(*(_QWORD *)(result + 112) + 9LL) )
  {
    result = *(_QWORD *)(result + 48);
    if ( !*(_BYTE *)(result + 192) || *(_BYTE *)(a1 + 3856) )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
      if ( *(_BYTE *)(a1 + 3856) )
      {
        v4 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 48LL);
        v5 = *(void (**)(void))(*v4 + 16LL);
        if ( (char *)v5 == (char *)sub_6EE880 )
        {
          v4[1] = 0;
        }
        else
        {
          v8 = v3;
          v5();
          v3 = v8;
        }
      }
      sub_1FB0C90(
        &v9,
        a1 + 264,
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        v3,
        *(_BYTE **)(a1 + 64),
        *(_QWORD *)(a1 + 72),
        *(_BYTE *)(a1 + 3857));
      v6 = *(__m128i **)(a1 + 96);
      v7 = v10;
      *v6 = _mm_load_si128(&v9);
      v6[1].m128i_i32[0] = v7;
      result = *(_QWORD *)(a1 + 96);
      *(_BYTE *)(result + 48) = 1;
    }
  }
  return result;
}
