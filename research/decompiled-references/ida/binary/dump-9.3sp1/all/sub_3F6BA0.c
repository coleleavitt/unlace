__int64 __fastcall sub_3F6BA0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  signed int v14; // [rsp+Ch] [rbp-4Ch]
  unsigned __int8 v15[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_120560(a2, "_mm_cvtsi128_si32")
    && *(_BYTE *)(a2 + 64) == 8
    && (v5 = *(_QWORD *)(a2 + 72), *(_QWORD *)(v5 + 32) == 1)
    && (v6 = *(_QWORD *)(v5 + 24), *(_BYTE *)v6 == 4)
    && (v7 = *(_QWORD *)(v6 + 8), v3 = sub_120560(v7, "_mm_srli_si128"), (_BYTE)v3)
    && *(_BYTE *)(v7 + 64) == 8
    && (v9 = *(_QWORD *)(v7 + 72), *(_QWORD *)(v9 + 32) == 2)
    && (v10 = *(_QWORD *)(v9 + 24), *(_DWORD *)(v10 + 4) == 16)
    && *(_BYTE *)(v10 + 80) == 2
    && (v11 = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 16LL), v11 <= 0xC) )
  {
    if ( *(_BYTE *)v10 == 4 && (v12 = *(_DWORD **)(v10 + 8), *v12 == 2) )
    {
      sub_12CBA0((__int64)v12, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), v11);
      *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL) = 4;
      sub_11D890(a2, *(_QWORD *)(v10 + 8));
    }
    else
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 16LL);
      sub_123A40((__int64)v15, (unsigned __int8 *)v10, (unsigned int)v11, v8);
      if ( (unsigned __int8)sub_126F10((unsigned __int64)v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), v14, v13)
        && (v3 = sub_12AB50(v15, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), 4, 1), (_BYTE)v3) )
      {
        *(_DWORD *)a2 = 4;
        sub_11CA10((char *)(a2 + 32), (char *)v15);
        sub_11CDA0(a2 + 64);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(a2 + 36);
      }
      else
      {
        v3 = 0;
      }
      sub_11CDA0((__int64)v15);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
