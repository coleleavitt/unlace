unsigned __int64 __fastcall sub_787190(__int64 a1, _UNKNOWN **a2, unsigned __int64 a3, __int64 a4, char a5)
{
  _UNKNOWN **v6; // r14
  unsigned __int64 i; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // rax
  _BYTE *v12; // r15
  size_t v13; // r12
  int v15; // edx
  unsigned __int64 v16; // [rsp+0h] [rbp-88h]
  unsigned __int64 *v17; // [rsp+8h] [rbp-80h]
  volatile signed __int32 *v19; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v16 = a3;
  v20 = __readfsqword(0x28u);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 88) = a1 + 136;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 216) = sub_77EC40;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a4;
  *(_QWORD *)(a1 + 224) = a1;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 356) = 1;
  *(_QWORD *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 572) = 0;
  *(_BYTE *)(a1 + 580) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = a1 + 640;
  *(_QWORD *)(a1 + 600) = 1;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_OWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 624) = 1065353216;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_BYTE *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 652) = 5;
  if ( !a2 )
  {
    v16 = 132;
    v6 = &off_2B101A0;
    goto LABEL_3;
  }
  v6 = a2;
  if ( a3 )
  {
LABEL_3:
    for ( i = 0; i < v16; ++i )
    {
      v12 = v6[i];
      if ( !v12 )
        std::__throw_logic_error("basic_string::_S_construct null not valid");
      v13 = strlen((const char *)v6[i]);
      if ( v13 )
      {
        v8 = std::string::_Rep::_S_create();
        v9 = v8;
        v10 = (unsigned __int64 *)(v8 + 24);
        if ( v13 == 1 )
        {
          *(_BYTE *)(v8 + 24) = *v12;
          if ( (unsigned __int64 *)v8 != std::string::_Rep::_S_empty_rep_storage )
          {
LABEL_12:
            *(_DWORD *)(v9 + 16) = 0;
            *(_QWORD *)v9 = v13;
            *(_BYTE *)(v9 + v13 + 24) = 0;
          }
        }
        else
        {
          v17 = (unsigned __int64 *)v8;
          v11 = (unsigned __int64 *)memcpy(v10, v12, v13);
          v9 = (__int64)v17;
          v10 = v11;
          if ( v17 != std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_12;
        }
      }
      else
      {
        v10 = &std::string::_Rep::_S_empty_rep_storage[3];
      }
      v19 = (volatile signed __int32 *)v10;
      *(_WORD *)sub_780770((__int64 *)(a1 + 88), (const void **)&v19) = i + 128;
      if ( v19 - 6 != (volatile signed __int32 *)std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v15 = _InterlockedExchangeAdd(v19 - 2, 0xFFFFFFFF);
        }
        else
        {
          v15 = *((_DWORD *)v19 - 2);
          *((_DWORD *)v19 - 2) = v15 - 1;
        }
        if ( v15 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
  }
  sub_786EA0(a1, 0, a5);
  return v20 - __readfsqword(0x28u);
}

