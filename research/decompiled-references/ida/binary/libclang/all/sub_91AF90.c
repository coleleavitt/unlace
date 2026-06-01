__int64 __fastcall sub_91AF90(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v7; // r12
  unsigned int v8; // ebp
  bool v9; // si
  _BOOL8 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edx
  void *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int64 v25; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+8h] [rbp-70h]
  void *v27; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-60h]
  void *v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-50h]
  void *v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-40h]

  v4 = a3;
  v5 = *(_DWORD *)(a1 + 816);
  switch ( v5 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v32 = 8;
      v15 = (unsigned __int8)sub_915550(v14);
      goto LABEL_27;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v32 = 8;
      v16 = (unsigned __int8)sub_915900(v14);
      goto LABEL_31;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v32 = 16;
      v15 = (unsigned __int16)sub_915930(v14);
      goto LABEL_27;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v32 = 16;
      v16 = (unsigned __int16)sub_915CE0(v14);
      goto LABEL_31;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v32 = 32;
      v15 = (unsigned int)sub_915D10(v14);
      goto LABEL_27;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v32 = 32;
      v16 = (unsigned int)sub_9160C0(v14);
      goto LABEL_31;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v15 = sub_9160F0(v14);
      v32 = 64;
LABEL_27:
      v31 = (void *)v15;
      sub_2587E80(&v29, &v31, v4);
      if ( v32 > 0x40 )
        goto LABEL_32;
      goto LABEL_34;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      v16 = sub_9164A0(v14);
      v32 = 64;
LABEL_31:
      v31 = (void *)v16;
      sub_2587E20(&v29, &v31, v4);
      if ( v32 > 0x40 )
      {
LABEL_32:
        if ( v31 )
          operator delete[](v31);
      }
LABEL_34:
      v32 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v31);
        if ( v30 > 0x40 )
        {
          if ( v29 )
            operator delete[](v29);
        }
      }
      else
      {
        v31 = v29;
      }
      v17 = sub_A1A4E0(v14, 16);
      *(_DWORD *)(v17 + 8) = v32;
      *(_QWORD *)v17 = v31;
      return 1;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v18 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_919FD0((__int64)&v29, v18);
      if ( !v4 )
        v4 = v30;
      sub_2587E20(&v31, &v29, v4);
      v28 = v32;
      if ( v32 > 0x40 )
        goto LABEL_41;
      goto LABEL_48;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v18 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_91A020((__int64)&v29, v18);
      if ( !v4 )
        v4 = v30;
      sub_2587E80(&v31, &v29, v4);
      v28 = v32;
      if ( v32 > 0x40 )
      {
LABEL_41:
        sub_2585B30(&v27);
        if ( v32 > 0x40 && v31 )
          operator delete[](v31);
      }
      else
      {
LABEL_48:
        v27 = v31;
      }
      v19 = sub_A1A4E0(v18, 16);
      *(_DWORD *)(v19 + 8) = v28;
      *(_QWORD *)v19 = v27;
      v28 = 0;
      if ( v30 > 0x40 )
      {
        v13 = v29;
        if ( v29 )
LABEL_51:
          operator delete[](v13);
      }
      return 1;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == v5 )
      {
        v20 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        v30 = a3;
        v21 = (unsigned __int8)sub_8F4170(v20);
        if ( v4 > 0x40 )
        {
          sub_2585A50(&v29, v21, 1);
          v32 = v30;
          if ( v30 <= 0x40 )
          {
            v28 = v30;
            v27 = v29;
          }
          else
          {
            sub_2585B30(&v31);
            v28 = v32;
            if ( v32 <= 0x40 )
            {
              v24 = v30;
              v27 = v31;
            }
            else
            {
              sub_2585B30(&v27);
              if ( v32 > 0x40 && v31 )
                operator delete[](v31);
              v24 = v30;
            }
            if ( v24 > 0x40 && v29 )
              operator delete[](v29);
          }
        }
        else if ( v4 )
        {
          v28 = v4;
          v27 = (void *)(v21 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v4));
        }
        else
        {
          v28 = 0;
          v27 = nullptr;
        }
        v22 = sub_A1A4E0(v20, 16);
        *(_DWORD *)(v22 + 8) = v28;
        *(_QWORD *)v22 = v27;
      }
      return 1;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return 1;
      v7 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F5730((__int64)&v31, v7);
      v8 = v32;
      v9 = v32 <= 0x40 ? v31 == nullptr : v8 == (unsigned int)sub_2587400(&v31);
      v28 = v4;
      v10 = !v9;
      if ( v4 > 0x40 )
      {
        sub_2585A50(&v27, v10, 1);
        v30 = v28;
        if ( v28 <= 0x40 )
        {
          v26 = v28;
          v25 = (unsigned __int64)v27;
        }
        else
        {
          sub_2585B30(&v29);
          v26 = v30;
          if ( v30 <= 0x40 )
          {
            v23 = v28;
            v25 = (unsigned __int64)v29;
          }
          else
          {
            sub_2585B30(&v25);
            if ( v30 > 0x40 && v29 )
              operator delete[](v29);
            v23 = v28;
          }
          if ( v23 > 0x40 && v27 )
            operator delete[](v27);
        }
      }
      else if ( v4 )
      {
        v26 = v4;
        v25 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & v10;
      }
      else
      {
        v26 = 0;
        v25 = 0;
      }
      v11 = sub_A1A4E0(v7, 16);
      v12 = v26;
      v26 = 0;
      *(_DWORD *)(v11 + 8) = v12;
      *(_QWORD *)v11 = v25;
      if ( v8 <= 0x40 )
        return 1;
      v13 = v31;
      if ( !v31 )
        return 1;
      goto LABEL_51;
  }
}

