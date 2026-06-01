unsigned __int64 __fastcall sub_6BA920(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // cl
  unsigned __int64 v14; // [rsp+0h] [rbp-20h]

  result = *(_QWORD *)(a1 + 2120);
  if ( !result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 2112) + 80LL);
    v4 = *(_QWORD *)(v3 + 72);
    v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v4 & 1) == 0 )
    {
      if ( v5 <= 3 )
        goto LABEL_9;
      result = v4 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v4 & 2) == 0 )
        goto LABEL_9;
      v9 = *(_QWORD *)(result + 18200);
      if ( v9 )
      {
        v10 = *(_QWORD *)(result + 2192);
        *(_QWORD *)(result + 2272) += 24LL;
        v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(result + 2200) >= v11 + 24 && v10 )
          *(_QWORD *)(result + 2192) = v11 + 24;
        else
          v11 = sub_6A76A0(result + 2192, 24, 3);
        *(_QWORD *)v11 = v9;
        *(_DWORD *)(v11 + 8) = 0;
        v12 = v11 | 5;
        v13 = v11 & 0xFE;
        *(_QWORD *)(v11 + 16) = v3;
        v6 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        LOBYTE(v5) = v13 | 4;
        *(_QWORD *)(v3 + 72) = v12;
        result = v6;
        goto LABEL_4;
      }
      v5 = v3 & 0xFFFFFFFFFFFFFFFALL;
      v4 = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v3 + 72) = v4;
    }
    v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    result = v6;
    if ( v5 )
    {
LABEL_4:
      if ( (v5 & 4) != 0 && v6 )
      {
        v7 = *(_QWORD *)result;
        v8 = *(_DWORD *)(*(_QWORD *)result + 12LL);
        if ( *(_DWORD *)(result + 8) != v8 )
        {
          *(_DWORD *)(result + 8) = v8;
          v14 = result;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 144LL))(v7, v3);
          result = v14;
        }
        result = *(_QWORD *)(result + 16);
      }
    }
LABEL_9:
    result = sub_7831F0(a1, result);
    *(_QWORD *)(a1 + 2120) = result;
  }
  return result;
}

