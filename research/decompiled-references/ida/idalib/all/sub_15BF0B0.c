void __fastcall sub_15BF0B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdi
  __int64 (*v5)(void); // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // ecx
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rdx
  int v13; // eax
  __m128 v14[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v2 - 59) > 2 )
    return;
  v4 = a2;
  if ( (unsigned int)(v2 - 60) <= 1 )
    v4 = *(_QWORD *)(sub_BBF290(a2) + 48);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
  if ( (char *)v5 == (char *)sub_A01140 )
    v6 = sub_B70A60(v4);
  else
    v6 = v5();
  v7 = *(unsigned int *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v7 )
  {
    v9 = (v7 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v10 = (_QWORD *)(v8 + 40LL * v9);
    if ( v6 == *v10 )
    {
LABEL_8:
      sub_15BDBC0(v14, v10, (_QWORD *)(v8 + 40 * v7), a1 + 32, 1);
      v11 = v14[0].m128_u64[0];
      goto LABEL_9;
    }
    if ( *v10 != -4096 )
    {
      v13 = 1;
      do
      {
        v9 = (v7 - 1) & (v13 + v9);
        v10 = (_QWORD *)(v8 + 40LL * v9);
        if ( v6 == *v10 )
          goto LABEL_8;
        ++v13;
      }
      while ( *v10 != -4096 );
    }
  }
  sub_15BDBC0(v14, (_QWORD *)(v8 + 40 * v7), (_QWORD *)(v8 + 40 * v7), a1 + 32, 1);
  v11 = v14[0].m128_u64[0];
LABEL_9:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL * *(unsigned int *)(a1 + 48));
  sub_15BDBC0(v14, v12, v12, a1 + 32, 1);
  if ( v14[0].m128_u64[0] != v11 )
  {
    v14[0].m128_u64[0] = v6;
    if ( !*(_QWORD *)(v11 + 24) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(unsigned __int64, __m128 *))(v11 + 32))(v11 + 8, v14);
  }
}
