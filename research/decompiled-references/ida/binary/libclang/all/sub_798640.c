void __fastcall sub_798640(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rax

  if ( a2 == a3 )
  {
    *(_QWORD *)(a1 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    v5 = a4[274];
    a4[284] += 16LL;
    v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a4[275] >= v6 + 16 && v5 )
      a4[274] = v6 + 16;
    else
      v6 = sub_792ED0((__int64)(a4 + 274), 16, 3);
    *(_QWORD *)v6 = a2;
    *(_QWORD *)(v6 + 8) = a3;
    *(_QWORD *)(a1 + 16) = v6 | 4;
  }
}

