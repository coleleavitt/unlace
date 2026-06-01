unsigned __int64 __fastcall sub_11D370(__int64 a1)
{
  __int64 snippet_api; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  _QWORD *v6; // rax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // rdi
  int v16; // [rsp+4h] [rbp-8Ch] BYREF
  _QWORD v17[3]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v18; // [rsp+20h] [rbp-70h] BYREF
  __int128 v19; // [rsp+28h] [rbp-68h]
  __int64 v20; // [rsp+40h] [rbp-50h] BYREF
  __int64 v21; // [rsp+48h] [rbp-48h]
  __int128 v22; // [rsp+50h] [rbp-40h]
  int v23; // [rsp+60h] [rbp-30h]
  unsigned __int64 v24; // [rsp+68h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  snippet_api = get_snippet_api();
  v3 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)a1 = snippet_api;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 88);
        }
      }
    }
    *(_QWORD *)(a1 + 96) = 0;
    qfree();
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v17[2] = a1 + 88;
  v17[1] = &off_231F00;
  for_all_extlangs();
  v20 = 40;
  v21 = 0;
  v23 = 99;
  v18 = 0;
  v16 = 0;
  v17[0] = 0;
  v22 = 0;
  v19 = 0;
  v7 = sub_1089D0(
         (__int64)"BUTTON NO NONE\n"
                  "BUTTON YES NONE\n"
                  "BUTTON CANCEL NONE\n"
                  "STARTITEM 1\n"
                  "Execute script\n"
                  "%/<~S~nippet list:E45::25:::><|><Please enter script ~b~ody:t40::60:::>\n"
                  "<S~c~ripting language:b30:0:::> <~T~ab size:D31:5:5::><#Execute script#~R~un:B51:51:10::><#Save to fil"
                  "e#Ex~p~ort:B52:52:10::><#Load from file#~I~mport:B53:53:10::>",
         0x44u,
         sub_11D080,
         &qword_252E80,
         &v18,
         &v20,
         a1 + 88,
         &v16,
         v17,
         sub_117390,
         sub_117390,
         sub_117390,
         sub_117390,
         sub_117390);
  sub_1770B0(a1 + 16, v7, v8, v9, v10, v11);
  if ( *(_BYTE *)(a1 + 80) || !*(_QWORD *)(a1 + 72) )
  {
    v15 = v18;
    *(_QWORD *)a1 = 0;
    if ( v15 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    if ( v21 )
      goto LABEL_16;
  }
  else
  {
    v12 = sub_193920(&qword_252E80);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 2288) = 1;
      *(_QWORD *)(v12 + 2280) = &off_231FE0;
    }
    if ( *(_BYTE *)(a1 + 80) )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v13 = v18;
    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 328LL) = sub_1175F0;
    if ( v13 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    if ( v21 )
    {
LABEL_16:
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  return v24 - __readfsqword(0x28u);
}

