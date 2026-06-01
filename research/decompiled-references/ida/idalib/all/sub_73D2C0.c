__int64 __fastcall sub_73D2C0(__int64 a1, unsigned __int16 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v5; // r13d
  bool v6; // zf
  unsigned __int16 v8; // r12
  unsigned int v10; // r15d
  __int64 v11; // rdx
  unsigned __int16 *v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdi

  v5 = *(unsigned __int8 *)(a1 + 5804);
  if ( (_BYTE)v5 )
  {
    v6 = *(_QWORD *)(a1 + 8) == 0;
    *(_BYTE *)(a1 + 5804) = 0;
    if ( v6 )
    {
      v5 = 0;
      goto LABEL_20;
    }
    if ( (*(_BYTE *)(a1 + 1620) & 1) != 0 )
    {
      dword_2CCC638 = 19;
      sub_743100(19, 0, a3);
    }
    if ( dword_2CCC638 == 21 )
      sub_743100(21, 0, a3);
    if ( *a2 > 0x204u )
      sub_743100(18, 0, a3);
    *(_QWORD *)(a1 + 48) = a5;
    v8 = a3;
    *(_DWORD *)(a1 + 1612) = 0;
    *(_WORD *)(a1 + 64) = 0;
    if ( a5 )
      *(_QWORD *)(a5 + 8) = 0;
    if ( (_WORD)a3 == 0xFFFF )
    {
      if ( *(unsigned __int16 *)((char *)a2 + *a2 + 2) > 0x404u )
        sub_743100(18, 0, a3);
      *(_QWORD *)(a1 + 4232) = a2;
      v11 = *(unsigned __int16 *)((char *)a2 + *a2 + 2);
      v15 = v11 + *a2 + 4;
      *(_DWORD *)(a1 + 4240) = v15;
      if ( *(_DWORD *)(a1 + 1628) >= v15 )
      {
        v12 = a2;
        goto LABEL_16;
      }
    }
    else
    {
      if ( (unsigned __int16)a3 > 0x404u )
        sub_743100(18, 0, a3);
      v10 = *a2 + 2;
      v12 = (unsigned __int16 *)memcpy((void *)(a1 + 4244), a2, v10);
      v13 = (__int64)v12 + *(unsigned __int16 *)(a1 + 4244) + 2;
      v14 = v10 + v8 + 2;
      *(_WORD *)v13 = v8;
      *(_DWORD *)(a1 + 4240) = v14;
      if ( *(_DWORD *)(a1 + 1628) < v14 )
      {
        *(_QWORD *)(a1 + 4232) = v12;
        goto LABEL_12;
      }
      v18 = v13 + 2;
      if ( v8 >= 8u )
      {
        v20 = v13 + 10;
        *(_QWORD *)(v20 - 8) = *a4;
        v11 = *(_QWORD *)((char *)a4 + v8 - 8);
        *(_QWORD *)(v18 + v8 - 8) = v11;
        qmemcpy(
          (void *)(v20 & 0xFFFFFFFFFFFFFFF8LL),
          (char *)a4 - (v18 - (v20 & 0xFFFFFFFFFFFFFFF8LL)),
          8 * ((unsigned __int64)((_DWORD)v18 - (v20 & 0xFFFFFFF8) + v8) >> 3));
      }
      else if ( (v8 & 4) != 0 )
      {
        *(_DWORD *)(v13 + 2) = *(_DWORD *)a4;
        v11 = *(unsigned int *)((char *)a4 + v8 - 4);
        *(_DWORD *)(v18 + v8 - 4) = v11;
      }
      else if ( v8 )
      {
        v11 = *(unsigned __int8 *)a4;
        *(_BYTE *)(v13 + 2) = v11;
        if ( (v8 & 2) != 0 )
        {
          v11 = *(unsigned __int16 *)((char *)a4 + v8 - 2);
          *(_WORD *)(v13 + v8) = v11;
        }
      }
      *(_QWORD *)(a1 + 4232) = v12;
      v19 = *(_DWORD *)(a1 + 4240);
      if ( *(_DWORD *)(a1 + 1628) >= v19 )
      {
        if ( !v19 )
        {
          if ( !under_debugger )
            interr(1686);
          BUG();
        }
LABEL_16:
        v16 = *(_DWORD *)(a1 + 24);
        byte_2CCC5CA = 0;
        if ( v16 )
        {
          sub_73D130(a1, v12);
          if ( byte_2CCC5CA )
            goto LABEL_18;
        }
        else
        {
          sub_7465B0(a1 + 48, 1, v12, 0, (char *)v12 + *v12 + 2);
          sub_73CF10(a1, 0, *(_QWORD *)(a1 + 4232), 0);
          ++*(_DWORD *)(a1 + 28);
          if ( byte_2CCC5CA )
          {
LABEL_18:
            *(_BYTE *)(a1 + 4220) = 0;
            sub_744F90(a1, 1);
            byte_2CCC5CA = 0;
            *(_WORD *)(a1 + 1634) = 0;
LABEL_19:
            *(_QWORD *)(a1 + 48) = 0;
            *(_DWORD *)(a1 + 1612) = 0;
            *(_WORD *)(a1 + 64) = 0;
LABEL_20:
            *(_BYTE *)(a1 + 5804) = 1;
            return v5;
          }
        }
        *(_BYTE *)(a1 + 4220) = 1;
        memcpy((void *)(a1 + 2672), a2, *a2 + 2LL);
        goto LABEL_19;
      }
    }
LABEL_12:
    dword_2CCC638 = 18;
    sub_743100(18, 0, v11);
  }
  return v5;
}
