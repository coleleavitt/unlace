__int64 __fastcall sub_70B280(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  char v7; // dl
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // dx
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = v2;
  v5 = *(_QWORD *)v2;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 46 )
  {
    v4 = 0;
    v8 = *(_QWORD *)(sub_B14A40(v6) + 128);
    if ( v8 > 7 )
    {
      if ( (v8 & 4) != 0 )
      {
        v11 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        v13 = *(_QWORD *)(v12 + 8);
        if ( (v13 & 7) == 0 )
        {
          v4 = v12 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v13 & 8) == 0 )
            goto LABEL_3;
        }
        v8 = sub_B0CF30(v11, v2);
      }
      v4 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    }
LABEL_3:
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(_BYTE *)(v6 + 16);
  }
  if ( v7 != 13 )
  {
    if ( *(_BYTE *)(v5 + 16) == 10 )
      return (*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF;
    if ( v7 == 10 )
    {
      v5 = sub_B0D320(v5);
      if ( v5 )
        return (*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF;
      v5 = *(_QWORD *)v4;
    }
    return sub_6F6DE0(a1, v5);
  }
  v9 = *(_WORD *)(v6 + 18);
  result = 1;
  if ( ((v9 >> 3) & 0x1FF) == 0x1B3 )
    return result;
  if ( *(_BYTE *)(v5 + 16) != 10 )
    return sub_6F6DE0(a1, v5);
  return (*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF;
}

