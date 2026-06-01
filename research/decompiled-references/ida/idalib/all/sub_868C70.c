_QWORD *__fastcall sub_868C70(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax

  if ( !*(_DWORD *)a1 )
  {
    v2 = sub_868B50(a1, 32);
    v3 = v2;
    if ( v2 )
    {
      *v2 = 0;
      v2[3] = 0;
      v2[2] = a2 & 0x10000 | (a2 << 17) & 0x1FE0000u;
      v4 = *(_QWORD **)(a1 + 40);
      if ( v4 )
        *v4 = v3;
      else
        *(_QWORD *)(a1 + 16) = v3;
      v5 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 40) = v3;
      v3[1] = v5;
      *(_QWORD *)(a1 + 120) = v5 + 2LL * ((unsigned __int8)a2 < 0x24u) + 13;
      v6 = sub_867B60(a1, 1);
      if ( v6 )
      {
        *(_BYTE *)v6 = -2;
        return v3;
      }
    }
    *(_DWORD *)a1 = 2;
  }
  return nullptr;
}
