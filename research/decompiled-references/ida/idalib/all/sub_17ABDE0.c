__int64 __fastcall sub_17ABDE0(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  _DWORD *v25; // rax
  char v26; // r12
  __int64 v27; // r13
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+24h] [rbp-34h]

  if ( *(char *)(a1 + 28) < 0 )
    return 6;
  v8 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v8 + 96), v8, a4, a5, a6, a7);
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL);
  if ( v14 )
  {
    LODWORD(v33) = 1;
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v10, v11, v12, v13);
    v19 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v19 + 24) & 1) != 0 )
      sub_B96980(v19);
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v15, v16, v17, v18);
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v20, v21, v22, v23);
    v24 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
      v25 = (_DWORD *)sub_B96980(v24);
    else
      v25 = *(_DWORD **)(v24 + 24);
    HIDWORD(v33) = *v25;
  }
  else
  {
    v26 = 0;
    v27 = 0x4000000100000200LL;
    v28 = sub_B8E970(a1 + 64);
    if ( v28 )
    {
      do
      {
        if ( *(char *)(v28 + 28) < 0 )
        {
          v26 = 1;
        }
        else
        {
          v29 = *(_BYTE *)(v28 + 28) & 0x7F;
          if ( (unsigned int)(unsigned __int8)v29 - 49 > 2 )
          {
            if ( (_BYTE)v29 == 86 )
            {
              LODWORD(v33) = 4;
LABEL_34:
              HIDWORD(v33) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
              return v33;
            }
            if ( (unsigned __int8)v29 > 0x3Eu || !_bittest64(&v27, v29) )
            {
              if ( (unsigned int)(unsigned __int8)v29 - 59 > 2 )
              {
                if ( (*(_BYTE *)(v28 + 29) & 2) == 0 )
                {
                  LODWORD(v33) = 5;
                  HIDWORD(v33) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                  return v33;
                }
              }
              else
              {
                v31 = *(_QWORD *)(v28 + 128);
                if ( v31 && (*(_BYTE *)(v31 + 10) & 0x20) != 0 )
                {
                  LODWORD(v33) = 3;
                  HIDWORD(v33) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                  return v33;
                }
                if ( (*(_BYTE *)(v28 + 74) & 1) != 0 )
                {
                  v32 = sub_17ABDE0(v28);
                  if ( (_DWORD)v32 )
                    return v32;
                }
              }
            }
          }
          else if ( (*(_BYTE *)(v28 + 68) & 0xC) != 0xC && (*(_BYTE *)(v28 + 68) & 0xC) != 0 )
          {
            v30 = sub_B780B0(v28);
            LODWORD(v33) = 2;
            if ( v30 )
            {
              HIDWORD(v33) = sub_EEC8C0(v30, v8, a2);
              return v33;
            }
            goto LABEL_34;
          }
        }
        v28 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( v28 );
      if ( v26 )
        return 6;
    }
    return v14;
  }
  return v33;
}
