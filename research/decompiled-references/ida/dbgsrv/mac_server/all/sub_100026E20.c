/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026E20
// Address: 0x0000000100026E20

//----- (0000000100026E20) ----------------------------------------------------
void *__fastcall sub_100026E20(__int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  __int64 v3; // r15
  void *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r15
  void *result; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  void *v10; // rax
  __int64 v11; // rcx

  v2 = a2;
  if ( a2 <= 0xF )
  {
    v2 = a2 | 0xE0;
    *(_BYTE *)(a1 + 212) = a2 | 0xE0;
LABEL_7:
    v6 = *(_QWORD *)(a1 + 200);
    result = *(void **)v6;
    v8 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
    {
      result = qvector_reserve(*(_QWORD *)(a1 + 200), result, v8 + 1, 1u);
      *(_QWORD *)v6 = result;
      v8 = *(_QWORD *)(v6 + 8);
    }
    *((_BYTE *)result + v8) = v2;
    ++*(_QWORD *)(v6 + 8);
    ++*(_DWORD *)(a1 + 208);
    return result;
  }
  if ( (char)a2 == a2 )
  {
    *(_BYTE *)(a1 + 212) = -96;
    v3 = *(_QWORD *)(a1 + 200);
    v4 = *(void **)v3;
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v5 + 1) )
    {
      v4 = qvector_reserve(*(_QWORD *)(a1 + 200), v4, v5 + 1, 1u);
      *(_QWORD *)v3 = v4;
      v5 = *(_QWORD *)(v3 + 8);
    }
    *((_BYTE *)v4 + v5) = -96;
    ++*(_QWORD *)(v3 + 8);
    ++*(_DWORD *)(a1 + 208);
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 212) = -45;
  v9 = *(_QWORD *)(a1 + 200);
  v10 = *(void **)v9;
  v11 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
  {
    v10 = qvector_reserve(*(_QWORD *)(a1 + 200), v10, v11 + 1, 1u);
    *(_QWORD *)v9 = v10;
    v11 = *(_QWORD *)(v9 + 8);
  }
  *((_BYTE *)v10 + v11) = -45;
  ++*(_QWORD *)(v9 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_100026A20(a1, a2);
  sub_100026A20(a1, SWORD1(a2));
  sub_100026A20(a1, SWORD2(a2));
  return sub_100026A20(a1, SHIWORD(a2));
}
