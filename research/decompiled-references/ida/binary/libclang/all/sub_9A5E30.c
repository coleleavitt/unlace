_BYTE *__fastcall sub_9A5E30(__int64 a1)
{
  __int64 v1; // r12
  char v2; // bp
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rdi
  _BYTE *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_BYTE *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = *(_QWORD *)(a1 + 184);
  if ( !v4 )
    v2 = 0;
  result = (_BYTE *)sub_A1A4E0(v5, 8);
  *result = v2;
  return result;
}

