unsigned __int64 __fastcall sub_179FCF0(__int64 a1, _QWORD *a2, _BYTE *a3, __int64 a4)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  char v11; // dl
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // r9
  bool v22; // al
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // r12d
  unsigned __int64 v26; // rax
  void *v27; // rdx
  __int64 *v28; // [rsp+0h] [rbp-B8h]
  __int64 *v29; // [rsp+0h] [rbp-B8h]
  __int64 *v30; // [rsp+0h] [rbp-B8h]
  __int64 v31; // [rsp+18h] [rbp-A0h] BYREF
  void *v32; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-90h]
  char v34; // [rsp+2Ch] [rbp-8Ch]
  __int16 v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  unsigned int v37; // [rsp+40h] [rbp-78h] BYREF
  char v38; // [rsp+44h] [rbp-74h]
  void *v39; // [rsp+48h] [rbp-70h]
  unsigned int v40; // [rsp+50h] [rbp-68h]
  char v41; // [rsp+54h] [rbp-64h]

  v6 = *(_DWORD *)(a4 + 8);
  *a3 = 0;
  if ( v6 > 0x40 )
  {
    **(_QWORD **)a4 = 0;
    memset((void *)(*(_QWORD *)a4 + 8LL), 0, 8 * ((unsigned int)(((unsigned __int64)v6 + 63) >> 6) + 0x1FFFFFFF));
  }
  else
  {
    *(_QWORD *)a4 = 0;
  }
  v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v8 + 17) & 4) != 0 )
    return 0;
  v31 = a1 & 7;
  if ( (a1 & 8) != 0 )
  {
    v7 = v8;
    v31 = *(__int64 *)((char *)&qword_18 + (a1 & 0xFFFFFFFFFFFFFFF0LL)) | a1 & 7;
  }
  v11 = *(_BYTE *)(v7 + 16);
  if ( v11 == 42 )
  {
    v12 = sub_179FCF0(*(_QWORD *)(v7 + 32), a2, a3, a4);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v12;
    v13 = sub_A70010((__int64)a2, v12);
    return sub_F5E8B0(&v31, (__int64)a2, v13);
  }
  if ( v11 == 40 )
  {
    v12 = sub_179FCF0(*(_QWORD *)(v7 + 32), a2, a3, a4);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v12;
    v13 = sub_A760B0((__int64)a2, v12);
    return sub_F5E8B0(&v31, (__int64)a2, v13);
  }
  if ( *(_BYTE *)(v8 + 16) != 6 )
    return 0;
  v14 = *(_QWORD *)(v8 + 32);
  v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    v14 = sub_179FCF0(*(_QWORD *)(v8 + 32), a2, a3, a4);
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  v16 = *(_QWORD *)(v8 + 40);
  v28 = (__int64 *)v15;
  v9 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 &= ~1u;
  if ( v16 )
  {
    v17 = sub_C3F220(v16, (__int64)&v35, (__int64)a2, 0, 0, v15);
    v21 = v28;
    if ( v17 )
    {
      v33 = v40;
      if ( v40 > 0x40 )
      {
        sub_2205510(&v32);
        v21 = v28;
      }
      else
      {
        v32 = v39;
      }
      v34 = v41;
      if ( v41 || (v29 = v21, v22 = sub_179A730((__int64 *)&v32), v21 = v29, !v22) )
      {
        if ( (*(_BYTE *)(*v21 + 17) & 0xC) != 0
          || (v30 = v21, sub_F62670(*v21, nullptr, v18, v19, v20, (__int64)v21))
          || (unsigned __int8)sub_179FCB0(*v30) )
        {
          v24 = sub_C16760((__int64)&v32);
          v25 = v33 - v24;
        }
        else
        {
          v25 = sub_F56CB0(a2, v14, (__int64)&v32);
        }
        if ( (unsigned int)sub_F56FC0(a2) >= v25 )
        {
          v26 = sub_A70F70((__int64)a2, v14, (__int64)&v32, *(_DWORD **)(v8 + 40), 0, 0);
          v9 = sub_F5E8B0(&v31, (__int64)a2, v26);
          v23 = v33;
        }
        else
        {
          if ( *(_DWORD *)(a4 + 8) <= 0x40u && (v23 = v33, v33 <= 0x40) )
          {
            v27 = v32;
            *(_DWORD *)(a4 + 8) = v33;
            *(_QWORD *)a4 = v27;
          }
          else
          {
            sub_22056A0(a4, &v32);
            v23 = v33;
          }
          v9 = 0;
          *(_BYTE *)(a4 + 12) = v34;
        }
      }
      else
      {
        *a3 = 1;
        v23 = v33;
        v9 = 0;
      }
      if ( v23 > 0x40 && v32 )
        operator delete[](v32);
    }
    if ( v37 > 1 )
      sub_A4F8E0((int *)&v37);
  }
  return v9;
}
