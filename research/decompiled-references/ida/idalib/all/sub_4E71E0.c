__int64 __fastcall sub_4E71E0(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v1 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 8) = 1;
  *v1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v2 = (_BYTE *)qvector_reserve(a1 + 24, 0, 1, 1);
  *(_QWORD *)(a1 + 24) = v2;
  *(_QWORD *)(a1 + 32) = 1;
  *v2 = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v3 = (_BYTE *)qvector_reserve(a1 + 48, 0, 2, 1);
  *(_QWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 56) = 2;
  *v3 = 48;
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 1LL) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v4 = (_BYTE *)qvector_reserve(a1 + 72, 0, 2, 1);
  *(_QWORD *)(a1 + 72) = v4;
  *(_QWORD *)(a1 + 80) = 2;
  *v4 = 48;
  result = *(_QWORD *)(a1 + 72);
  *(_BYTE *)(result + 1) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  return result;
}
