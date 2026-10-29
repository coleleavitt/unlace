__int64 __fastcall sub_BDA9A0(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v4; // rbp
  _BYTE *v6; // rax
  __int64 result; // rax
  unsigned __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE *v23; // rdx
  char v24; // al
  unsigned int v25; // r12d
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rax
  __int64 *v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+Ch] [rbp-4Ch]
  unsigned int v37; // [rsp+Ch] [rbp-4Ch]
  unsigned int v38; // [rsp+Ch] [rbp-4Ch]
  unsigned int v39; // [rsp+Ch] [rbp-4Ch]
  unsigned int v40; // [rsp+Ch] [rbp-4Ch]
  void *v41; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v42; // [rsp+18h] [rbp-40h]
  void *v43; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v44; // [rsp+28h] [rbp-30h]
  char v45; // [rsp+2Ch] [rbp-2Ch]

  v4 = a2;
  if ( ((*(_DWORD *)a1 >> 14) & 8) != 0 )
  {
    v6 = *(_BYTE **)(a2 + 2320);
    if ( (v6[1] & 0x10) != 0 )
    {
      if ( (*v6 & 0x20) == 0 )
        goto LABEL_6;
      if ( ((*(_DWORD *)a1 >> 14) & 0x10) != 0 )
        return 0;
    }
    else if ( ((*(_DWORD *)a1 >> 14) & 0x10) != 0 )
    {
      return 0;
    }
    if ( (_DWORD)a3 == 1 )
    {
      if ( ((*(_DWORD *)a1 >> 14) & 4) == 0 )
        return (unsigned __int8)sub_F3D240(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a4);
      return 1;
    }
    result = 0;
    if ( (_DWORD)a3 == 2 )
      return result;
  }
LABEL_6:
  v8 = *(_WORD *)a1 & 0x1FF;
  if ( v8 <= 0x4Fu )
  {
    switch ( v8 )
    {
      case 0x4Fu:
        return sub_BDA9A0(*(_QWORD *)(a1 + 16), v4, a3);
      case 0x14u:
        return sub_BDA9A0(*(_QWORD *)(a1 + 24), a2, a3);
      case 0x39u:
        if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) != 0x3FFF8000 )
          return sub_BDA9A0(
                   *(_QWORD *)(a1
                             + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu))
                             + 32),
                   a2,
                   a3);
        return 0;
      case 0x4Du:
        if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
          return 0;
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
          v32 = *(_QWORD *)(a1 + 24);
        else
          v32 = *(_QWORD *)(a1 + 32);
        return sub_BDA9A0(v32, a2, a3);
    }
    result = 4;
    if ( v8 == 58 )
      return result;
    goto LABEL_94;
  }
  if ( v8 > 0x58u )
  {
    if ( v8 == 112 )
    {
      v38 = a3;
      v27 = sub_C70F40(a1);
      return sub_BDA9A0(v27, a2, v38);
    }
    if ( v8 == 111 )
    {
      v40 = a3;
      v33 = sub_C70F80(a1);
      return sub_BDA9A0(v33, a2, v40);
    }
LABEL_94:
    if ( v8 == 48 )
    {
      v35 = *(_QWORD *)(a1 + 16);
      if ( (v35 & 4) != 0 )
        v32 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      else
        v32 = v35 & 0xFFFFFFFFFFFFFFF8LL;
      return sub_BDA9A0(v32, a2, a3);
    }
    if ( v8 == 26 )
    {
      v32 = *(_QWORD *)(a1 + 16);
      if ( v32 )
        return sub_BDA9A0(v32, a2, a3);
    }
    goto LABEL_22;
  }
  a2 = *(_QWORD *)(a2 + 2320);
  v9 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_23;
  v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 42 )
    goto LABEL_13;
  a2 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a2 + 16) == 42 )
  {
    v39 = a3;
    v10 = sub_F3F310(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v9);
    a3 = v39;
    if ( !v10 )
    {
LABEL_22:
      v9 = *(_QWORD *)(a1 + 8);
      goto LABEL_23;
    }
    a2 = *(_QWORD *)(v4 + 2320);
LABEL_13:
    v11 = *(_QWORD *)(v10 + 32);
    v12 = 0;
    v13 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v13 & 8) != 0 )
      v12 = *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
    v14 = v12 | ((unsigned __int8)v11 | (unsigned __int8)v13) & 7;
    if ( (*(_BYTE *)(a2 + 47) & 0x20) != 0 )
    {
      a2 = (unsigned int)((*(_BYTE *)(a2 + 60) & 1) != 0) + 4;
      if ( (_DWORD)a2 == (unsigned int)v14 >> 9 )
      {
        a2 = 0xFFFFFFFF000001FFLL;
        v14 &= 0xFFFFFFFF000001FFLL;
      }
    }
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 13 )
    {
      v16 = *(unsigned __int16 *)(v15 + 18);
      LOWORD(v16) = ((unsigned __int16)v16 >> 3) & 0x1FF;
      if ( (_WORD)v16 == 435 && !v14 )
      {
        v36 = a3;
        v17 = sub_9C8B50(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v16, v12);
        a3 = v36;
        if ( v17 )
          return sub_BDA9A0(*(_QWORD *)(a1 + 16), v4, a3);
      }
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) != 13
    || (a2 = *(unsigned __int16 *)(v18 + 18),
        result = 3,
        LOWORD(a2) = ((unsigned __int16)a2 >> 3) & 0x1FF,
        (_WORD)a2 != 488) )
  {
    v37 = a3;
    v19 = sub_F3F8C0(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v19 )
    {
      v21 = *(_QWORD *)(v4 + 2320);
      if ( (*(_BYTE *)(v21 + 1) & 0x10) == 0 )
      {
        v28 = sub_F3D1D0(v19, a2, v20, v21, v22);
        if ( (*(_BYTE *)(v28 + 29) & 1) != 0 )
        {
          v30 = sub_B68690(v28, a2, v20, v21, v22, v29);
          v20 = v37;
          v21 = *v30;
          a2 = *v30 + 8LL * *((unsigned int *)v30 + 2);
          if ( *v30 >= a2 )
          {
            if ( v21 != a2 )
            {
              if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) == 380 )
                goto LABEL_73;
              v34 = (unsigned __int64 *)(a2 + 8);
              while ( 1 )
              {
                a2 = (unsigned __int64)v34;
                if ( v34 == (unsigned __int64 *)v21 )
                  break;
                a2 = *v34++;
                if ( *(_WORD *)(a2 + 36) == 380 )
                  goto LABEL_73;
              }
            }
          }
          else
          {
            v31 = (__int64 *)*v30;
            while ( 1 )
            {
              v21 = *v31;
              if ( *(_WORD *)(*v31 + 36) == 380 )
                break;
              if ( (__int64 *)a2 == ++v31 )
                goto LABEL_28;
            }
            if ( (__int64 *)a2 != v31 )
            {
LABEL_73:
              if ( (*(_WORD *)a1 & 0x1FF) == 0x4C )
              {
                v21 = *(_QWORD *)(a1 + 32);
                if ( (*(_WORD *)v21 & 0x1FF) == 0x35 )
                  return sub_BDA9A0(**(_QWORD **)(v21 + 16), v4, v37);
              }
            }
          }
        }
      }
    }
LABEL_28:
    if ( !sub_9C8B50(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v21, v22) )
      return 0;
    v23 = *(_BYTE **)(v4 + 2320);
    v24 = v23[1];
    if ( (v24 & 8) != 0
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 47 )
    {
      return 0;
    }
    if ( (v24 & 0x10) != 0 )
    {
      if ( (*(_WORD *)a1 & 0x1FF) == 0x34 )
      {
        sub_BD2C50((__int64)&v43, *(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 24));
        v25 = v44;
        if ( v44 <= 0x40 )
        {
          if ( !v43 )
            return 2;
        }
        else
        {
          if ( v25 == (unsigned int)sub_21E2A40(&v43) )
          {
            if ( v43 )
            {
              operator delete[](v43);
              return 2;
            }
            return 2;
          }
          if ( v43 )
            operator delete[](v43);
        }
        v23 = *(_BYTE **)(v4 + 2320);
      }
      if ( (*v23 & 0x20) == 0 || !(unsigned __int8)sub_C1ACE0(a1, v4) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_C1AD00(a1, v4, 0) )
    {
      return 0;
    }
    sub_C19F20(&v41, a1, v4, 0);
    v44 = 64;
    v43 = nullptr;
    v45 = 0;
    v26 = sub_96A590((__int64 *)&v41, (__int64 *)&v43);
    if ( v44 > 0x40 && v43 )
      operator delete[](v43);
    if ( v42 > 0x40 && v41 )
      operator delete[](v41);
    if ( v26 )
      return 0;
    if ( (*(_WORD *)a1 & 0x1FF) == 0x34 )
      return 2;
    return 1;
  }
  return result;
}

