unsigned __int64 __fastcall sub_196B30(TView *this, _WORD *a2, double a3, double a4, __m128 a5)
{
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int8 v29; // al
  unsigned __int16 v30; // dx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+8h] [rbp-B0h]
  __int64 v38; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+20h] [rbp-98h]
  char v40; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v41)(); // [rsp+40h] [rbp-78h] BYREF
  __int64 v42; // [rsp+48h] [rbp-70h] BYREF
  __int128 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+60h] [rbp-58h] BYREF
  __int128 v45; // [rsp+68h] [rbp-50h]
  char v46; // [rsp+78h] [rbp-40h]
  int v47; // [rsp+80h] [rbp-38h]
  unsigned __int64 v48; // [rsp+88h] [rbp-30h]

  v6 = *a2;
  v48 = __readfsqword(0x28u);
  if ( v6 != 512 )
  {
    if ( v6 == 256 )
    {
      switch ( a2[4] )
      {
        case 0x1389:
          a2[4] = 5;
          *a2 = 16;
          goto LABEL_43;
        case 0x138A:
          a2[4] = 20992;
          *a2 = 16;
          break;
        case 0x138B:
          a2[4] = 21248;
          *a2 = 16;
          break;
        case 0x138C:
          a2[4] = 5120;
          *a2 = 16;
          break;
        case 0x138D:
          a2[4] = 20;
          *a2 = 16;
          goto LABEL_33;
        case 0x138E:
          a2[4] = 21;
          *a2 = 16;
          goto LABEL_21;
        default:
          goto LABEL_4;
      }
      v29 = 0;
    }
    else
    {
      if ( v6 != 16 )
        goto LABEL_4;
      v29 = *((_BYTE *)a2 + 8);
      switch ( v29 )
      {
        case 0x14u:
LABEL_33:
          sub_18D340(*((_QWORD *)this + 14) + 160LL, *(_QWORD *)(*((_QWORD *)this + 14) + 2600LL));
          return TView::clearEvent(this, a2);
        case 0x15u:
LABEL_21:
          v19 = *((_QWORD *)this + 14);
          v40 = 0;
          v36 = 0;
          v38 = 0;
          v37 = 0;
          v39 = 0;
          (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v19 + 352LL))(v19, &v36, 7);
          v46 = 0;
          v42 = 0;
          v41 = &off_234CB0;
          v44 = 0;
          v47 = 0;
          v43 = 0;
          v45 = 0;
          sub_17EA40(&v42, &v36);
          v20 = *((_QWORD *)this + 14);
          v47 = 7;
          sub_17F110((__int64 *)(v20 + 160), (__int64)&v41);
          v41 = &off_234CB0;
          sub_17E9E0(&v44);
          v21 = v42;
          if ( v42 )
          {
            v22 = v43;
            if ( (_QWORD)v43 )
            {
              v23 = 0;
              do
              {
                v24 = v23++;
                sub_17E9E0((__int64 *)(32 * v24 + v21));
                v21 = v42;
              }
              while ( v22 != v23 );
            }
            *(_QWORD *)&v43 = 0;
            qfree();
          }
          sub_17E9E0(&v38);
          v25 = v36;
          if ( v36 )
          {
            v26 = v37;
            if ( (_QWORD)v37 )
            {
              v27 = 0;
              do
              {
                v28 = v27++;
                sub_17E9E0((__int64 *)(32 * v28 + v25));
                v25 = v36;
              }
              while ( v26 != v27 );
            }
            *(_QWORD *)&v37 = 0;
            qfree();
          }
          return TView::clearEvent(this, a2);
        case 5u:
LABEL_43:
          if ( (unsigned __int8)sub_196870(*((__int64 **)this + 14), a3, a4, a5) )
            return TView::clearEvent(this, a2);
LABEL_44:
          v6 = *a2;
LABEL_4:
          if ( (v6 & 0x1F) != 0 )
          {
            *(_DWORD *)(*((_QWORD *)this + 14) + 1228LL) = 0;
            v7 = *((_QWORD *)this + 14);
            *((_DWORD *)this + 10) = 1;
            *(_DWORD *)(v7 + 1224) = 0;
            TView::drawCursor(this);
          }
          return TWindow::handleEvent();
      }
    }
    v30 = a2[4];
    if ( v30 == 7178 )
    {
      v35 = *((_QWORD *)this + 14);
      if ( *(int *)(v35 + 1224) > 0 )
        sub_18D4D0((__int64 *)(v35 + 160), *(_QWORD *)(v35 + 2600), 1u);
      return TView::clearEvent(this, a2);
    }
    if ( v30 <= 0x1C0Au )
    {
      if ( v30 == 3592 )
      {
        v33 = *((_QWORD *)this + 14);
        v34 = *(_DWORD *)(v33 + 1224);
        if ( v34 > 0 )
        {
          *(_DWORD *)(v33 + 1224) = v34 - 1;
          --*((_DWORD *)this + 10);
        }
        TView::drawCursor(this);
        return TView::clearEvent(this, a2);
      }
      if ( v30 == 5120 )
      {
        sub_18D480(*((_QWORD *)this + 14) + 160LL, *(_QWORD *)(*((_QWORD *)this + 14) + 2600LL));
        return TView::clearEvent(this, a2);
      }
      goto LABEL_54;
    }
    if ( v30 == 20992 )
    {
      if ( (unsigned __int8)sub_196570(*((_QWORD *)this + 14), a3, a4, a5) )
        return TView::clearEvent(this, a2);
    }
    else
    {
      if ( v30 != 21248 )
        goto LABEL_54;
      if ( (unsigned __int8)sub_196230(*((_QWORD *)this + 14), a3, a4, a5) )
        return TView::clearEvent(this, a2);
    }
    v29 = *((_BYTE *)a2 + 8);
LABEL_54:
    if ( v29 > 0x1Fu )
    {
      v31 = *((_QWORD *)this + 14);
      v32 = *(int *)(v31 + 1224);
      if ( (unsigned __int8)(v29 - 48) > 9u || (_DWORD)v32 )
      {
        *(_BYTE *)(v31 + v32 + 200) = v29;
        *(_BYTE *)(*((_QWORD *)this + 14) + *(_DWORD *)(*((_QWORD *)this + 14) + 1224LL) + 1 + 200LL) = 0;
        sub_18D4D0((__int64 *)(*((_QWORD *)this + 14) + 160LL), *(_QWORD *)(*((_QWORD *)this + 14) + 2600LL), 2u);
      }
      else
      {
        *(_DWORD *)(v31 + 1228) *= 10;
        *(_DWORD *)(*((_QWORD *)this + 14) + 1228LL) = *(_DWORD *)(*((_QWORD *)this + 14) + 1228LL)
                                                     + *((unsigned __int8 *)a2 + 8)
                                                     - 48;
        (*(void (__fastcall **)(TView *, _QWORD))(*(_QWORD *)this + 208LL))(
          this,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 14) + 1228LL) - 1));
      }
      return TView::clearEvent(this, a2);
    }
    goto LABEL_44;
  }
  if ( a2[4] != 25 )
    return TWindow::handleEvent();
  v9 = *((_QWORD *)this + 14);
  v40 = 0;
  v36 = 0;
  v38 = 0;
  v37 = 0;
  v39 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v9 + 352LL))(v9, &v36, 7);
  v46 = 0;
  v42 = 0;
  v41 = &off_234CB0;
  v44 = 0;
  v47 = 0;
  v43 = 0;
  v45 = 0;
  sub_17EA40(&v42, &v36);
  v10 = *((_QWORD *)this + 14);
  v47 = 7;
  sub_17F110((__int64 *)(v10 + 160), (__int64)&v41);
  v41 = &off_234CB0;
  sub_17E9E0(&v44);
  v11 = v42;
  if ( v42 )
  {
    v12 = v43;
    if ( (_QWORD)v43 )
    {
      v13 = 0;
      do
      {
        v14 = v13++;
        sub_17E9E0((__int64 *)(32 * v14 + v11));
        v11 = v42;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  sub_17E9E0(&v38);
  v15 = v36;
  if ( v36 )
  {
    v16 = v37;
    if ( (_QWORD)v37 )
    {
      v17 = 0;
      do
      {
        v18 = v17++;
        sub_17E9E0((__int64 *)(32 * v18 + v15));
        v15 = v36;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v48 - __readfsqword(0x28u);
}

