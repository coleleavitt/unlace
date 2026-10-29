_QWORD *__fastcall sub_1FE27E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, __int64 *a7)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax

  v7 = *a6;
  *a6 = 0;
  v8 = a7[1];
  v9 = *a7;
  if ( v8 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    else
      ++*(_DWORD *)(v8 + 8);
  }
  v10 = operator new(0x28u);
  *(_BYTE *)(v10 + 8) = 0;
  *(_QWORD *)v10 = &off_2C711F8;
  *(_QWORD *)(v10 + 16) = v9;
  *(_QWORD *)(v10 + 24) = v8;
  *(_QWORD *)(v10 + 32) = v7;
  *a1 = v10;
  return a1;
}
