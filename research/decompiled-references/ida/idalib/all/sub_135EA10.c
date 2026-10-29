void __fastcall sub_135EA10(int a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v4; // r14
  int v8; // ebx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+0h] [rbp-3Ch]
  unsigned __int64 v13; // [rsp+8h] [rbp-34h]

  if ( a1 < 0 )
  {
    v4 = a2 + 16;
    v8 = a1;
    while ( !(unsigned __int8)sub_1020490((__int64)a4, v8, nullptr) )
    {
      v13 = sub_101FC50((__int64)a4, v8);
      if ( a3 )
      {
        v8 = v13;
        if ( (v13 & 0x80000000) == 0LL )
          return;
      }
      else
      {
        v8 = HIDWORD(v13);
LABEL_9:
        if ( v8 >= 0 )
          return;
      }
    }
    v9 = v8 & 0x7FFFFFFF;
    if ( (v8 & 0x7FFFFFFFu) < a4[119] || v9 >= a4[120] )
      v10 = sub_101D590((__int64)a4, v9);
    else
      v10 = a4[118];
    v11 = *(unsigned int *)(a2 + 8);
    if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v12 = v10;
      sub_2237220(a2, v4, v11 + 1, 4);
      v11 = *(unsigned int *)(a2 + 8);
      v10 = v12;
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v11) = v10;
    ++*(_DWORD *)(a2 + 8);
    v8 = sub_10205A0((__int64)a4, v8);
    goto LABEL_9;
  }
}
