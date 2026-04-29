unsigned __int64 __fastcall sub_42E20(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int16 v10; // dx
  unsigned int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v5 = *a3;
  v13 = __readfsqword(0x28u);
  v7 = v5;
  if ( v5 == -1 )
  {
    v5 = 0;
    v7 = 0;
  }
  v12 = v5;
  if ( sub_3AF60((_QWORD *)a2, (__int64)&v11) )
  {
    sub_EAA0((__int64)"Android prelinked file detected, load base: %08X\n", v11);
    v12 = v11;
    if ( (*(_BYTE *)(a1 + 520) & 8) == 0 )
      goto LABEL_5;
  }
  else if ( (*(_BYTE *)(a1 + 520) & 8) == 0 )
  {
LABEL_5:
    v8 = v12;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_335D0((__int64)&v12, (__int64)"Please specify the new image base") )
    sub_EB70(0);
  v8 = v12;
  if ( v12 == v7 )
  {
LABEL_13:
    v8 = v7;
    goto LABEL_6;
  }
  v10 = *(_WORD *)(a2 + 520);
  if ( (!*(_BYTE *)(a2 + 248) || !*(_QWORD *)(a2 + 120) || v10 != 1) && v10 != 3 )
  {
    if ( (unsigned int)sub_343A0(
                         0,
                         (__int64)"AUTOHIDE REGISTRY\n"
                                  "This type of file is not intended to be relocated.Are you sure you want to rebase it ("
                                  "most likely some pointers will be wrong)?\n") == 1 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_6:
  *a3 = v8;
  *a4 = v7;
  return v13 - __readfsqword(0x28u);
}
