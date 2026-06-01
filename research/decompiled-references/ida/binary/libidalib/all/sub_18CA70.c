__int64 __fastcall sub_18CA70(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned __int8 v14; // [rsp+Fh] [rbp-29h] BYREF
  __int64 v15[5]; // [rsp+10h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  v4 = sub_184EF0(a1, a2, &v14, v15);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( (unsigned __int8)(v14 - 67) <= 0x2Fu
    && (v6 = 0x801100008011LL, _bittest64(&v6, (unsigned int)v14 - 67))
    && v15[0]
    && !*(_QWORD *)(v15[0] + 32) )
  {
    TRadioButtons::setItem(*(_QWORD *)v15[0], *(unsigned int *)(v15[0] + 48), a3);
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 168LL))(v4, 256, a3 ^ 1u);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  v7 = v15[0];
  if ( v15[0] && *(_QWORD *)(v15[0] + 16) )
  {
    v8 = 0;
    v9 = 0;
    v10 = a3 ^ 1;
    do
    {
      ++v8;
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v9);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, 256, v10);
      v12 = *(_QWORD *)(*(_QWORD *)(v15[0] + 8) + 8 * v9);
      v9 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
      v7 = v15[0];
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)(v15[0] + 16) );
  }
  return 1;
}

