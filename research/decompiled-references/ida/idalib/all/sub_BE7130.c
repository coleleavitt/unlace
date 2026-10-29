__int64 __fastcall sub_BE7130(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  unsigned int v9; // ebp
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  __int64 *v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v18[0] = a1;
  if ( !(unsigned __int8)sub_BC9800(v18, a2) )
    return 0;
  v3 = v18[0];
  v4 = (_QWORD *)*v18[0];
  v5 = *(__int64 (**)())(*v18[0] + 1248);
  if ( v5 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v18[0], a2) )
      return 0;
    v3 = v18[0];
    v4 = (_QWORD *)*v18[0];
  }
  v6 = (__int64 (*)())v4[165];
  if ( v6 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v18[0];
    v4 = (_QWORD *)*v18[0];
  }
  v7 = (__int64 (*)())v4[181];
  if ( v7 != sub_BC5CA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v3, a2) )
      return 0;
    v3 = v18[0];
    v4 = (_QWORD *)*v18[0];
  }
  v8 = (__int64 (*)())v4[183];
  if ( v8 == sub_BC5CC0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(v3, a2) )
  {
    v9 = sub_BC9420(v18, a2);
    if ( (_BYTE)v9 )
    {
      v10 = *(_BYTE *)(a2 + 68);
      if ( (v10 & 1) == 0 )
        goto LABEL_31;
      v11 = *(_QWORD *)(a2 + 72);
      if ( (v10 & 0xC) != 0xC && (v10 & 0xC) != 0 )
        v11 = *(_QWORD *)(v11 + 8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v18[0] + 96))(v18[0], v11) )
      {
LABEL_31:
        if ( !sub_B8E0B0(a2) || (v12 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v18, v12) )
        {
          v13 = sub_9C8850(a2);
          v15 = v14;
          v16 = (_QWORD *)v13;
          if ( (_QWORD *)v13 == v14 )
            return v9;
          while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v18[0] + 32))(v18[0], *v16) )
          {
            if ( v15 == ++v16 )
              return v9;
          }
        }
      }
    }
  }
  return 0;
}
