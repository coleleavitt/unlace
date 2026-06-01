__int64 __fastcall sub_7A7530(__int64 a1, char a2)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( a2 && !result )
  {
    v3 = (_QWORD *)sub_798D40(a1);
    v4 = v3[274];
    v3[284] += 56LL;
    v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3[275] >= (unsigned __int64)(v5 + 56) && v4 )
      v3[274] = v5 + 56;
    else
      v5 = sub_7A1DE0((__int64)(v3 + 274), 56, 3);
    *(_BYTE *)(v5 + 4) &= ~1u;
    *(_DWORD *)v5 = 0;
    *(_QWORD *)(a1 + 64) = v5;
    v6 = sub_798D40(a1);
    sub_6B5A70(v6, (__int64)sub_778160, v5);
    return *(_QWORD *)(a1 + 64);
  }
  return result;
}

