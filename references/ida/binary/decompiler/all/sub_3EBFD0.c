__int64 __fastcall sub_3EBFD0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdi
  signed int v12; // [rsp+Ch] [rbp-4Ch]
  char v13[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_11E120(a2, "_mm_cvtsi128_si32")
    && *(_BYTE *)(a2 + 64) == 8
    && (v5 = *(_QWORD *)(a2 + 72), *(_QWORD *)(v5 + 32) == 1)
    && (v6 = *(_QWORD *)(v5 + 24), *(_BYTE *)v6 == 4)
    && (v7 = *(_QWORD *)(v6 + 8), v3 = sub_11E120(v7, "_mm_srli_si128"), (_BYTE)v3)
    && *(_BYTE *)(v7 + 64) == 8
    && (v8 = *(_QWORD *)(v7 + 72), *(_QWORD *)(v8 + 32) == 2)
    && (v9 = *(_QWORD *)(v8 + 24), *(_DWORD *)(v9 + 4) == 16)
    && *(_BYTE *)(v9 + 80) == 2
    && (v10 = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 16LL), v10 <= 0xC) )
  {
    if ( *(_BYTE *)v9 == 4 && (v11 = *(_DWORD **)(v9 + 8), *v11 == 2) )
    {
      sub_12A680((__int64)v11, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), v10);
      *(_DWORD *)(*(_QWORD *)(v9 + 8) + 68LL) = 4;
      sub_11B450(a2, *(_QWORD *)(v9 + 8));
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 16LL);
      sub_121540((__int64)v13, (unsigned __int8 *)v9);
      if ( (unsigned __int8)sub_124A00((unsigned __int64)v13, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), v12)
        && (v3 = sub_128630((unsigned __int64)v13, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 4, 1), (_BYTE)v3) )
      {
        *(_DWORD *)a2 = 4;
        sub_11A5D0((char *)(a2 + 32), v13);
        sub_11A960(a2 + 64);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(a2 + 36);
      }
      else
      {
        v3 = 0;
      }
      sub_11A960((__int64)v13);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
