__int64 __fastcall sub_38A600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rdi
  __int64 result; // rax

  sub_253960(*(_QWORD *)(a1 + 32), a2, a3);
  sub_339220(*(_QWORD *)(a1 + 128), 0x6Du, a1);
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v9 = *(__int64 **)(a1 + 32);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 1008LL);
  v11 = *(__int64 **)(v10 + 40);
  v12 = &v11[*(_QWORD *)(v10 + 48)];
  while ( v12 != v11 )
  {
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 )
      {
        if ( v9 == *(__int64 **)(v13 + 32) )
          break;
      }
      if ( v12 == ++v11 )
        goto LABEL_9;
    }
    ++v11;
    sub_37F170(v13, v9, v4, v5, v6, v7);
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
  result = sub_339220(*(_QWORD *)(a1 + 128), 0x66u, a1);
  *(_DWORD *)a1 |= 2u;
  return result;
}
