unsigned __int64 __fastcall sub_77AC30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx

  v4 = *(_QWORD *)(a1 + 56);
  result = (v4 >> 2) & 1;
  if ( a2 )
  {
    if ( !(_BYTE)result )
    {
      v8 = sub_798D40(a1);
      v9 = *(_QWORD *)(v8 + 2192);
      *(_QWORD *)(v8 + 2272) += 48LL;
      v10 = v8;
      v11 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v10 + 2200) >= v11 + 48 && v9 )
        *(_QWORD *)(v10 + 2192) = v11 + 48;
      else
        v11 = sub_779030(v10 + 2192, 48, 3);
      *(_DWORD *)(v11 + 16) = 0;
      *(_OWORD *)(v11 + 24) = 0;
      v12 = v11 | 4;
      *(_QWORD *)(v11 + 40) = 0;
      *(_OWORD *)v11 = 0;
      result = v11 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 56) = v12;
      *(_QWORD *)(result + 32) = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v4 = *(_QWORD *)(a1 + 56);
    }
    v6 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    *v6 = a2;
    v6[1] = a3;
  }
  else if ( (_BYTE)result )
  {
    v13 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    *v13 = 0;
    v13[1] = a3;
  }
  return result;
}

