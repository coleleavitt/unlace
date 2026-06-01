__int64 __fastcall sub_38F500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 result; // rax

  sub_2581E0(*(_QWORD *)(a1 + 32), a2, a3);
  sub_33E140(*(_QWORD *)(a1 + 128), 0x6Du, a1);
  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree();
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v8 = *(__int64 **)(a1 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 1008LL);
  v10 = *(__int64 **)(v9 + 40);
  v11 = &v10[*(_QWORD *)(v9 + 48)];
  while ( v11 != v10 )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        if ( v8 == *(__int64 **)(v12 + 32) )
          break;
      }
      if ( v11 == ++v10 )
        goto LABEL_9;
    }
    ++v10;
    sub_384070(v12, v8, v4, v5, v6, v7);
  }
LABEL_9:
  if ( (_BYTE)a2 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      59,
      *(_QWORD *)(a1 + 16),
      1,
      &callui,
      v6,
      v7);
  result = sub_33E140(*(_QWORD *)(a1 + 128), 0x66u, a1);
  *(_DWORD *)a1 |= 2u;
  return result;
}
