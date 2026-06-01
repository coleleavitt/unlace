__int64 __fastcall sub_C8BC80(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // esi
  __int64 result; // rax
  int v6; // eax
  int v7; // edx
  __int64 v8[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = *a1;
  v3 = a1[1];
  if ( (*(_BYTE *)(*(_QWORD *)v2 + 1LL) & 6) != 0 )
  {
    v4 = 13;
    if ( !*(_BYTE *)(v3 + 584) )
    {
LABEL_3:
      v8[0] = *(_QWORD *)v2 | 4LL;
      return sub_C7C7D0(v3, 10, v4, v8);
    }
LABEL_6:
    v8[0] = *(_QWORD *)v2 | 4LL;
    return sub_C7EAD0(v3, v4, v8);
  }
  v6 = sub_CC2440(*(_QWORD *)(v3 + 488), *(_QWORD *)(*(_QWORD *)v2 + 8LL));
  v3 = a1[1];
  v7 = v6;
  v4 = v6;
  if ( *(_BYTE *)(v3 + 584) )
  {
    v2 = *a1;
    goto LABEL_6;
  }
  result = 1;
  if ( v7 != 10 )
  {
    v2 = *a1;
    goto LABEL_3;
  }
  return result;
}

