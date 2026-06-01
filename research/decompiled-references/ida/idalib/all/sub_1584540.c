void __fastcall sub_1584540(_QWORD *a1, int a2, double a3)
{
  _BYTE *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r13
  void *v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-88h]
  unsigned __int64 v20; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-78h]
  int v22; // [rsp+18h] [rbp-70h]
  _BYTE *v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-60h]

  sub_168B9B0(&v23, a1[2] + 8LL, 6651);
  v4 = v23;
  if ( v23 )
  {
    v5 = *((unsigned int *)v23 + 106);
    v6 = *((unsigned int *)v23 + 107);
    v7 = v5 + 1;
  }
  else
  {
    v11 = v24;
    v12 = *(_DWORD *)(v24 + 14976);
    if ( v12 )
    {
      v14 = (unsigned int)(v12 - 1);
      *(_DWORD *)(v24 + 14976) = v14;
      v4 = *(_BYTE **)(v11 + 8 * v14 + 14848);
      v15 = *((unsigned int *)v4 + 134);
      *v4 = 0;
      v16 = *((_QWORD *)v4 + 66);
      *((_DWORD *)v4 + 106) = 0;
      v17 = v16 + (v15 << 6);
      if ( v16 == v17 )
      {
        v7 = 1;
        v5 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v17 -= 64;
            v18 = *(void **)(v17 + 24);
            if ( v18 == (void *)(v17 + 40) )
              break;
            operator delete(v18);
            if ( v16 == v17 )
              goto LABEL_20;
          }
        }
        while ( v16 != v17 );
LABEL_20:
        v5 = *((unsigned int *)v4 + 106);
        v7 = v5 + 1;
      }
      *((_DWORD *)v4 + 134) = 0;
      v6 = *((unsigned int *)v4 + 107);
    }
    else
    {
      v13 = operator new(0x3A0u);
      v6 = 8;
      v7 = 1;
      v4 = (_BYTE *)v13;
      *(_BYTE *)v13 = 0;
      *(_QWORD *)(v13 + 96) = v13 + 112;
      *(_QWORD *)(v13 + 128) = v13 + 144;
      *(_QWORD *)(v13 + 160) = v13 + 176;
      *(_QWORD *)(v13 + 192) = v13 + 208;
      *(_QWORD *)(v13 + 224) = v13 + 240;
      *(_QWORD *)(v13 + 256) = v13 + 272;
      *(_QWORD *)(v13 + 288) = v13 + 304;
      *(_QWORD *)(v13 + 320) = v13 + 336;
      *(_QWORD *)(v13 + 352) = v13 + 368;
      *(_QWORD *)(v13 + 384) = v13 + 400;
      *(_QWORD *)(v13 + 416) = v13 + 432;
      *(_QWORD *)(v13 + 104) = 0;
      *(_BYTE *)(v13 + 112) = 0;
      *(_QWORD *)(v13 + 136) = 0;
      *(_BYTE *)(v13 + 144) = 0;
      *(_QWORD *)(v13 + 168) = 0;
      *(_BYTE *)(v13 + 176) = 0;
      *(_QWORD *)(v13 + 200) = 0;
      *(_BYTE *)(v13 + 208) = 0;
      *(_QWORD *)(v13 + 232) = 0;
      *(_BYTE *)(v13 + 240) = 0;
      *(_QWORD *)(v13 + 264) = 0;
      *(_BYTE *)(v13 + 272) = 0;
      *(_QWORD *)(v13 + 296) = 0;
      *(_BYTE *)(v13 + 304) = 0;
      *(_QWORD *)(v13 + 328) = 0;
      *(_BYTE *)(v13 + 336) = 0;
      *(_QWORD *)(v13 + 360) = 0;
      *(_BYTE *)(v13 + 368) = 0;
      *(_QWORD *)(v13 + 392) = 0;
      *(_BYTE *)(v13 + 400) = 0;
      *(_QWORD *)(v13 + 424) = 0x800000000LL;
      *(_QWORD *)(v13 + 528) = v13 + 544;
      *(_QWORD *)(v13 + 536) = 0x600000000LL;
      v5 = 0;
    }
    v23 = v4;
  }
  LODWORD(v19) = a2;
  HIDWORD(v19) = a2;
  LOBYTE(v20) = 1;
  if ( v7 > v6 )
  {
    sub_2237220(v4 + 416, v4 + 432, v7, 12);
    v5 = *((unsigned int *)v4 + 106);
  }
  v8 = *((_QWORD *)v4 + 52) + 12 * v5;
  *(_QWORD *)v8 = v19;
  *(_DWORD *)(v8 + 8) = v20;
  ++*((_DWORD *)v4 + 106);
  sub_1582CA0((__int64)&v20, &v23);
  if ( v23 && v24 )
    sub_1580C40(v24, (unsigned __int64)v23);
  sub_1583E80(&v23, (__int64)a1, a3);
  v9 = operator new(0x60u);
  *(_DWORD *)(v9 + 16) = a2;
  *(_DWORD *)(v9 + 40) = v22;
  *(_QWORD *)(v9 + 32) = v21;
  v10 = v20;
  v20 = 0;
  *(_QWORD *)(v9 + 24) = v10;
  *(_QWORD *)(v9 + 48) = v9 + 64;
  *(_QWORD *)(v9 + 56) = 0x100000000LL;
  if ( (_DWORD)v24 )
    sub_1582780(v9 + 48, (__int64)&v23);
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v9,
    (std::__detail::_List_node_base *)(a1 + 3));
  ++a1[5];
  sub_CB7910((__int64)&v23);
  if ( v20 )
  {
    if ( v21 )
      sub_1580C40(v21, v20);
  }
}
