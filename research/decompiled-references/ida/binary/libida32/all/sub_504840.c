unsigned __int64 __fastcall sub_504840(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        signed int a4,
        unsigned __int32 a5)
{
  __int64 v5; // r12
  unsigned int v10; // eax
  __int64 v11; // r9
  _DWORD *v12; // rax
  char *v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+0h] [rbp-148h]
  int v18; // [rsp+8h] [rbp-140h]
  unsigned int v19; // [rsp+Ch] [rbp-13Ch]
  int v20[4]; // [rsp+10h] [rbp-138h] BYREF
  int v21[2]; // [rsp+20h] [rbp-128h]
  int v22[2]; // [rsp+28h] [rbp-120h]
  __int64 v23[3]; // [rsp+30h] [rbp-118h] BYREF
  char v24; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v25[8]; // [rsp+108h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*a1 + 1576);
  if ( !*(_BYTE *)(v5 + 152) )
  {
    *(_BYTE *)(v5 + 152) = 1;
    v10 = sub_3BC980(a1, a2, a3, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0, nullptr);
    if ( v10 < a3 )
    {
      v19 = v10;
      if ( (unsigned int)sub_500AC0(a1, v10, a4, nullptr) != a5 )
      {
        v12 = (_DWORD *)a1[2];
        if ( a4 >= v12[17] && a4 <= v12[18] && v12[20] != a4 )
          sub_5044E0(*a1, v19, a4, a5, 3u, 0);
      }
    }
    if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, a2, 4) >> 8) & 6) == 0 )
    {
      v23[0] = -1;
      v23[2] = 0;
      v23[1] = 0xFFFFFFFFLL;
      v13 = &v24;
      do
      {
        *(_WORD *)v13 = 0;
        v13 += 24;
        *((_WORD *)v13 - 11) = 0;
        *((_WORD *)v13 - 10) = 0;
        *((_DWORD *)v13 - 1) = 0;
        *((_WORD *)v13 - 9) = 0;
        *((_QWORD *)v13 - 2) = 0;
        *((_DWORD *)v13 - 2) = 0;
      }
      while ( v25 != (_QWORD *)v13 );
      v14 = decode_insn(v23, a2, v25, 0, 0, v11);
      if ( v14 != (unsigned int)get_item_end(a2, a2, v15, v16) - a2 )
      {
        *(_QWORD *)v21 = 0;
        *(_QWORD *)v22 = 0;
        *(_OWORD *)v20 = 0;
        if ( v14 )
        {
          sub_3D0CF0((int)a1, v17, v18, v20[0], v20[2], v21[0], v22[0], v23[0]);
          if ( *(_QWORD *)v21 )
            (*(void (__fastcall **)(int *, int *, __int64))v21)(v20, v20, 3);
        }
        else
        {
          sub_3CC010((_DWORD)a1, a2, 0);
        }
        sub_3A1A90(a1, a2, a2 + 1, 0x28u);
      }
    }
    *(_BYTE *)(v5 + 152) = 0;
  }
  return v25[0] - __readfsqword(0x28u);
}

