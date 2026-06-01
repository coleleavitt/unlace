__int64 __fastcall sub_214A6A0(__int64 a1)
{
  unsigned int v1; // eax
  const char *v2; // rax
  __int64 v3; // rdi
  _QWORD *v5; // r12
  unsigned int v6; // ebx
  void *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  const char *v9; // [rsp+10h] [rbp-48h] BYREF
  __int16 v10; // [rsp+30h] [rbp-28h]

  v1 = sub_2153CB0(*(_QWORD *)(a1 + 8), &v8);
  if ( (_BYTE)v1 )
  {
    v2 = "expected identifier in directive";
LABEL_3:
    v3 = *(_QWORD *)(a1 + 8);
    v9 = v2;
    v10 = 259;
    return (unsigned int)sub_21543E0(v3, &v9, 0, 0);
  }
  v5 = (_QWORD *)v8;
  if ( *(_QWORD *)v8 )
  {
LABEL_5:
    v2 = ".alt_entry must preceed symbol definition";
    goto LABEL_3;
  }
  v6 = v1;
  if ( (*(_BYTE *)(v8 + 9) & 0x70) == 0x20 && (*(_BYTE *)(v8 + 8) & 0x40) == 0 )
  {
    v7 = sub_210D820(*(_QWORD *)(v8 + 24));
    *v5 = v7;
    if ( v7 )
      goto LABEL_5;
    v5 = (_QWORD *)v8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 296LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v5,
          20) )
  {
    v2 = "unable to emit symbol attribute";
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  return v6;
}
