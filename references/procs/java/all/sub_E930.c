__int64 __fastcall sub_E930(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v11[16]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-98h]
  __int16 v13; // [rsp+30h] [rbp-88h]
  __int64 v14; // [rsp+4Ch] [rbp-6Ch]
  unsigned __int64 v15; // [rsp+98h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 1LL:
      goto LABEL_5;
    case 3LL:
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_BYTE *)(v6 + 33087);
      if ( v7 < 0 )
        return 0;
      *(_BYTE *)(v6 + 33087) = v7 | 0x80;
      sub_E500((__int64)"JavaLoader finalization stage...");
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(unsigned __int16 *)(v8 + 33041);
      if ( !*(_WORD *)(v8 + 33041) )
      {
LABEL_18:
        netnode_supset(*(_QWORD *)(v8 + 33336), 0, v8 + 33017, 124, 83);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 33380LL) = 0;
        sub_E500((__int64)"OK\n");
        return 0;
      }
      while ( 1 )
      {
        if ( netnode_supval(*(_QWORD *)(v8 + 33320), -v9, v11, 124, 83) != 124 )
          sub_E6A0();
        if ( !v14 && !v13 )
          goto LABEL_11;
        show_auto(v12, 0);
        if ( v14 )
        {
          sub_E6F0(*(_QWORD *)(a1 + 16), (__int64)v11);
          if ( v13 )
LABEL_17:
            sub_E800(*(_QWORD *)(a1 + 16), (__int64)v11);
        }
        else if ( v13 )
        {
          goto LABEL_17;
        }
LABEL_11:
        v8 = *(_QWORD *)(a1 + 16);
        if ( !--v9 )
          goto LABEL_18;
      }
    case 0LL:
      v2 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v2 + 33017) = 0;
      *(_QWORD *)(v2 + 33133) = 0;
      memset(
        (void *)((v2 + 33025) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v2 - (((_DWORD)v2 + 33025) & 0xFFFFFFF8) + 33141) >> 3));
LABEL_5:
      v3 = *(_QWORD *)(a1 + 16);
      v4 = *(_QWORD *)(v3 + 33336);
      v10 = *(unsigned __int16 *)(v3 + 148);
      netnode_supset(v4, -3, &v10, 8, 65);
      break;
  }
  return 0;
}
