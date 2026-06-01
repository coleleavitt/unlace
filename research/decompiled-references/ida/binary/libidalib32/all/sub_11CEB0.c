unsigned __int64 __fastcall sub_11CEB0(__int64 a1)
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
  int v16; // [rsp+8h] [rbp-88h] BYREF
  int v17; // [rsp+Ch] [rbp-84h] BYREF
  __int64 (__fastcall **v18)(int, int, int, int, int, int, int, __int64, __int64, int, __int64); // [rsp+10h] [rbp-80h]
  __int64 v19; // [rsp+18h] [rbp-78h]
  __int64 v20; // [rsp+20h] [rbp-70h] BYREF
  __int128 v21; // [rsp+28h] [rbp-68h]
  __int64 v22; // [rsp+40h] [rbp-50h] BYREF
  __int64 v23; // [rsp+48h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-40h]
  int v25; // [rsp+60h] [rbp-30h]
  unsigned __int64 v26; // [rsp+68h] [rbp-28h]

  v26 = __readfsqword(0x28u);
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
  v19 = a1 + 88;
  v18 = &off_230F00;
  for_all_extlangs();
  v22 = 40;
  v23 = 0;
  v25 = 99;
  v20 = 0;
  v16 = 0;
  v17 = 0;
  v24 = 0;
  v21 = 0;
  v7 = sub_108740(
         (__int64)"BUTTON NO NONE\n"
                  "BUTTON YES NONE\n"
                  "BUTTON CANCEL NONE\n"
                  "STARTITEM 1\n"
                  "Execute script\n"
                  "%/<~S~nippet list:E45::25:::><|><Please enter script ~b~ody:t40::60:::>\n"
                  "<S~c~ripting language:b30:0:::> <~T~ab size:D31:5:5::><#Execute script#~R~un:B51:51:10::><#Save to fil"
                  "e#Ex~p~ort:B52:52:10::><#Load from file#~I~mport:B53:53:10::>",
         0x44u,
         sub_11CBC0,
         &qword_251CE0,
         &v20,
         &v22,
         a1 + 88,
         &v16,
         &v17,
         sub_116F90,
         sub_116F90,
         sub_116F90,
         sub_116F90,
         sub_116F90);
  sub_1765B0(a1 + 16, v7, v8, v9, v10, v11);
  if ( *(_BYTE *)(a1 + 80) || !*(_QWORD *)(a1 + 72) )
  {
    v15 = v20;
    *(_QWORD *)a1 = 0;
    if ( v15 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( v23 )
      goto LABEL_16;
  }
  else
  {
    v12 = sub_192D20(&qword_251CE0);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 2288) = 1;
      *(_QWORD *)(v12 + 2280) = &off_230FE0;
    }
    if ( *(_BYTE *)(a1 + 80) )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v13 = v20;
    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 328LL) = sub_117200;
    if ( v13 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( v23 )
    {
LABEL_16:
      *(_QWORD *)&v24 = 0;
      qfree();
    }
  }
  return v26 - __readfsqword(0x28u);
}

