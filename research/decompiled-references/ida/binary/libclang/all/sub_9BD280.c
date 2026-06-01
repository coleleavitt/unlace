__int64 __fastcall sub_9BD280(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // r13
  __int64 i; // rbx
  __int64 v12; // kr00_8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  int v20; // ebx
  int v21; // r13d
  unsigned int v22; // ebx
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // rdx

  v4 = *(_DWORD *)(a2 + 504);
  if ( !v4
    || (v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
        v6 = sub_C63970(*(_QWORD *)(v5 + 17360), v4),
        !strchr(*(const char **)(v6 + 24), 116)) )
  {
    v7 = *(_QWORD *)(a1 + 200);
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 || !*(_BYTE *)(a2 + 502) )
      goto LABEL_5;
    v18 = sub_A180F0(v8, *(_QWORD *)(v7 + 152));
    v19 = *(_WORD *)v18 & 0x1FF;
    if ( v19 <= 0x59u )
      goto LABEL_24;
    if ( v19 <= 0x5Eu )
    {
      v20 = *(_DWORD *)(v18 + 16);
      v2 = v18 + *(unsigned __int8 *)(v18 + 3) + 8LL * ((*(_BYTE *)(v18 + 2) & 8) != 0) + 8;
      goto LABEL_25;
    }
    v2 = v18 + 40;
    if ( v19 != 114 )
    {
      if ( v19 != 115 )
      {
LABEL_24:
        v20 = 0;
        v2 = 0;
LABEL_25:
        result = *(unsigned int *)(a2 + 384);
        v21 = (v19 == 92) + *(_DWORD *)(a2 + 384) - *(unsigned __int8 *)(a2 + 499) - *(unsigned __int8 *)(a2 + 498);
        if ( v20 == v21 )
        {
LABEL_6:
          v10 = *(_QWORD *)(a2 + 376);
          for ( i = v10 + 4 * result; v10 != i; i -= 4 )
          {
            v12 = v2;
            v2 = *(_QWORD *)(a1 + 184);
            switch ( *(_DWORD *)(i - 4) )
            {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 0xA:
                sub_A1A5A0(*(_QWORD *)(a1 + 184), 8);
                result = sub_A1A5E0(v2, 8);
                break;
              case 8:
              case 9:
                v13 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 16);
                if ( *(_DWORD *)(v13 + 8) > 0x40u )
                {
                  if ( *(_QWORD *)v13 )
                    operator delete[](*(void **)v13);
                }
                result = sub_A1A5E0(v2, 16);
                break;
              case 0xB:
                v16 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
                if ( *(_DWORD *)(v16 + 8) > 0x40u && *(_QWORD *)v16 )
                  operator delete[](*(void **)v16);
                result = sub_A1A5E0(v2, 24);
                break;
              case 0xC:
                v15 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
                sub_5FF3B0(v15);
                result = sub_A1A5E0(v2, 24);
                break;
              case 0xD:
                v14 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
                sub_A1C0C0(v14);
                result = sub_A1A5E0(v2, 56);
                break;
              case 0xE:
                sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
                result = sub_A1A5E0(v2, 24);
                break;
              case 0xF:
                v17 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 72);
                sub_A1C0C0(v17);
                result = sub_A1A5E0(v2, 72);
                break;
              default:
                v2 = v12;
                break;
            }
          }
          return result;
        }
        v22 = v20 - 1;
        do
        {
          sub_9BCFB0(a1, *(_QWORD *)(v2 + 8LL * v22));
          v23 = v22--;
        }
        while ( v23 != v21 );
LABEL_5:
        result = *(unsigned int *)(a2 + 384);
        goto LABEL_6;
      }
      v2 = v18 + 48;
    }
    v20 = *(_DWORD *)(v18 + 32);
    goto LABEL_25;
  }
  v24 = sub_A180F0(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 200) + 152LL));
  result = *(unsigned int *)(v24 + 16);
  v25 = (unsigned int)(result - 1);
  v26 = 8 * v25;
  if ( (int)v25 >= 0 )
  {
    do
    {
      LODWORD(v25) = v25 - 1;
      v27 = v26 + v24 + 8LL * ((*(_BYTE *)(v24 + 2) & 8) != 0) + 8;
      v26 -= 8;
      result = sub_9BCFB0(a1, *(_QWORD *)(v27 + *(unsigned __int8 *)(v24 + 3)));
    }
    while ( (_DWORD)v25 != -1 );
  }
  return result;
}

