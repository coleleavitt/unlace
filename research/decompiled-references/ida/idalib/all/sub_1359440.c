_QWORD *__fastcall sub_1359440(__int64 a1, _BYTE *a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // r12
  _QWORD *result; // rax
  __int64 v12; // rdi

  v9 = operator new(0x90u);
  *(_QWORD *)v9 = &off_2C43340;
  *(_QWORD *)(v9 + 8) = a1;
  if ( a2 )
  {
    *(_QWORD *)(v9 + 16) = v9 + 32;
    sub_1359180((_QWORD *)(v9 + 16), a2, (__int64)&a2[a3]);
  }
  else
  {
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 16) = v9 + 32;
    *(_BYTE *)(v9 + 32) = 0;
  }
  *(_QWORD *)(v9 + 48) = v9 + 64;
  if ( a4 )
  {
    sub_1359180((_QWORD *)(v9 + 48), a4, (__int64)&a4[a5]);
  }
  else
  {
    *(_QWORD *)(v9 + 56) = 0;
    *(_BYTE *)(v9 + 64) = 0;
  }
  v10 = *(_QWORD *)(a1 + 1192);
  result = (_QWORD *)(v9 + 120);
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 88) = 0;
  *(_DWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = v9 + 120;
  *(_QWORD *)(v9 + 112) = 0;
  *(_QWORD *)(v9 + 120) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_DWORD *)(v9 + 136) = 0;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    result = (_QWORD *)operator new(0x18u);
    v12 = *(_QWORD *)(a1 + 1192);
    result[1] = v9;
    result[2] = v10;
    *result = &off_2BB2860;
    *(_QWORD *)(a1 + 1192) = result;
    if ( v12 )
      return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    *(_QWORD *)(a1 + 1192) = v9;
  }
  return result;
}
