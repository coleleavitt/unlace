__int64 __fastcall sub_9DCAA0(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  __int16 v7; // ax
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int8 **v10; // rbp
  __int64 (*v11)(void); // rax
  _QWORD **v12; // rdi
  __int64 (*v13)(void); // rdx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  void *v24[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF

  if ( !a3 )
    goto LABEL_4;
  v7 = *a3 & 0x1FF;
  if ( v7 != 107 )
  {
    if ( ((v7 + 422) & 0x1FFu) > 4 )
      goto LABEL_4;
    if ( (unsigned int)sub_80FBD0((__int64)a3) != 225 )
    {
      if ( (*a3 & 0x1FF) != 0x5D )
        goto LABEL_4;
      v19 = *(_QWORD *)(sub_8C3180((__int64)a3) + 40);
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v19 & 7) != 0 )
        v20 = 0;
      v21 = *(_QWORD *)(v20 + 16);
      if ( *(_DWORD *)v21 != 8 || *(_QWORD *)(v21 + 16) != 0x657461636F6C6C61LL )
      {
LABEL_4:
        v23 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
        v8 = sub_A2E0C0(a1, &v23, 2198, 0);
        v9 = *(_QWORD **)(a1 + 24);
        v10 = (unsigned __int8 **)v8;
        v11 = *(__int64 (**)(void))(*v9 + 104LL);
        if ( (char *)v11 == (char *)sub_8D7E60 )
        {
          v12 = (_QWORD **)v9[3];
          v13 = (__int64 (*)(void))(*v12)[13];
          if ( v13 == v11 )
            v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 104LL))(v12[3]);
          else
            v14 = v13();
        }
        else
        {
          v14 = v11();
        }
        sub_A248F0(v24, a4, v14);
        if ( v10 )
          sub_838D50(v10, (_BYTE *)v24[0], (size_t)v24[1]);
        if ( v24[0] != &v25 )
          operator delete(v24[0], v25 + 1);
        v15 = *(_DWORD *)(a4 + 48);
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            v16 = *(_QWORD *)(a4 + 24);
          }
          else
          {
            v16 = 0;
            if ( (unsigned int)(v15 - 2) > 1 )
              v16 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 32LL);
          }
        }
        else
        {
          v16 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 32LL);
          if ( *(_BYTE *)(v16 + 50) )
          {
            v22 = sub_BEE210(v16);
            sub_A2DD70(a1, v22, 2285);
            return 0;
          }
        }
        v17 = sub_BEE210(v16);
        sub_A2DD70(a1, v17, 105);
        return 0;
      }
    }
  }
  return 1;
}

