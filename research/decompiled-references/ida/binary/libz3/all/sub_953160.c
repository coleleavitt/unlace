__int64 __fastcall sub_953160(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(); // rax
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // [rsp+0h] [rbp-48h]
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 56LL);
  if ( v3 != sub_955D60 )
    return ((__int64 (__fastcall *)(_QWORD))v3)(*(_QWORD *)(*(_QWORD *)a1 + 1192LL));
  result = *(_QWORD *)(v2 + 16);
  *(_BYTE *)(v2 + 72) = 1;
  if ( *(_BYTE *)(result + 562) )
  {
    result = *(unsigned int *)(result + 184);
    v5 = *(unsigned int *)(a2 + 72);
    v12 = result;
    if ( (_DWORD)v5 )
    {
      v6 = *(unsigned int *)(a2 + 20);
      v7 = a2 + 16 * v6;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 80) + 24LL) == 1 )
          goto LABEL_7;
        v7 += 8;
      }
      while ( a2 + 8 * (v5 + 2 * v6) != v7 );
      ++v12;
LABEL_7:
      v8 = 0;
      v9 = 0;
      v11 = 8 * v5;
      while ( 1 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(a2 + 80 + 16 * v6 + v8) + 24LL);
        if ( v10 != 1 && v9 >= v12 )
          break;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 32) + 16LL))(*(_QWORD *)(v2 + 32), a2);
        if ( v10 != 1 )
          goto LABEL_9;
        v8 += 8;
        if ( v11 == v8 )
          return result;
LABEL_10:
        v6 = *(unsigned int *)(a2 + 20);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 40) + 16LL))(*(_QWORD *)(v2 + 40), a2);
LABEL_9:
      ++v9;
      v8 += 8;
      if ( v11 == v8 )
        return result;
      goto LABEL_10;
    }
  }
  return result;
}

