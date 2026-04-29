unsigned __int64 __fastcall sub_159580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v8; // zf
  __int64 v11; // rax
  _BYTE *v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rax
  _BYTE *v16; // rdi
  __int64 (__fastcall **v17)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v8 = *(_BYTE *)(a1 + 32) == 4;
  v24 = __readfsqword(0x28u);
  if ( v8 )
  {
    v15 = *(_QWORD *)(a2 + 96);
    v16 = *(_BYTE **)(a1 + 40);
    v18 = 0;
    v21 = 0;
    v17 = &off_4D8398;
    v22 = v15;
    v23 = a5;
    v19 = a3;
    v20 = a4;
    if ( (unsigned int)sub_11F1A0(v16, &v17) )
    {
      if ( !under_debugger )
        sub_3835A0(51930);
      goto LABEL_15;
    }
  }
  if ( *(_BYTE *)(a1 + 48) == 4 )
  {
    v13 = *(_QWORD *)(a2 + 96);
    v14 = *(_BYTE **)(a1 + 56);
    v23 = a5;
    v19 = a3;
    v18 = 0;
    v21 = 0;
    v17 = &off_4D8398;
    v22 = v13;
    v20 = a4;
    if ( (unsigned int)sub_11F1A0(v14, &v17) )
    {
      if ( !under_debugger )
        sub_3835A0(51931);
      goto LABEL_15;
    }
  }
  if ( !sub_11E300((unsigned int *)a1) && *(_BYTE *)(a1 + 64) == 4 )
  {
    v11 = *(_QWORD *)(a2 + 96);
    v12 = *(_BYTE **)(a1 + 72);
    v23 = a5;
    v19 = a3;
    v18 = 0;
    v21 = 0;
    v17 = &off_4D8398;
    v22 = v11;
    v20 = a4;
    if ( (unsigned int)sub_11F1A0(v12, &v17) )
    {
      if ( !under_debugger )
        sub_3835A0(51932);
LABEL_15:
      BUG();
    }
  }
  return v24 - __readfsqword(0x28u);
}
