__int64 __fastcall sub_F4AEA0(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rdx
  _BYTE *v4; // rax
  __int64 v5; // rax
  _BYTE *v6; // rdx
  __int64 result; // rax
  _BYTE *v8; // rdx

  v2 = a2;
  v3 = *(void **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v3 > 9u )
  {
    qmemcpy(v3, "__ptrauth(", 10);
    *(_QWORD *)(a2 + 32) += 10LL;
  }
  else
  {
    sub_22581D0(a2, "__ptrauth(", 10);
  }
  sub_2257BD0(a2, (*a1 >> 6) & 0x3FF);
  v4 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v4 )
  {
    v2 = sub_22581D0(a2, ",", 1);
  }
  else
  {
    *v4 = 44;
    ++*(_QWORD *)(a2 + 32);
  }
  v5 = sub_2257BD0(v2, (*a1 >> 1) & 1);
  v6 = *(_BYTE **)(v5 + 32);
  if ( *(_BYTE **)(v5 + 24) == v6 )
  {
    v5 = sub_22581D0(v5, ",", 1);
  }
  else
  {
    *v6 = 44;
    ++*(_QWORD *)(v5 + 32);
  }
  result = sub_2257BD0(v5, HIWORD(*a1));
  v8 = *(_BYTE **)(result + 32);
  if ( *(_BYTE **)(result + 24) == v8 )
    return sub_22581D0(result, ")", 1);
  *v8 = 41;
  ++*(_QWORD *)(result + 32);
  return result;
}

