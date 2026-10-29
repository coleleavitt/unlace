/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462C60
// Address: 0x00462C60

//----- (00462C60) --------------------------------------------------------
int __usercall sub_462C60@<eax>(__int128 _XMM0@<xmm0>)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v8; // rax

  if ( DWORD1(_XMM0) >= 0x41E00000 )
  {
    if ( DWORD1(_XMM0) < 0x43F00000 )
    {
      if ( (dword_4B5E20 & 0x20) != 0 )
      {
        LODWORD(v3) = _XMM0;
        if ( (DWORD1(_XMM0) & 0x7FFFFFFFu) >= 0x41E00000 )
        {
          HIDWORD(v3) = DWORD1(_XMM0) & 0xFFFFF | 0x100000;
          v4 = ((DWORD1(_XMM0) & 0x7FFFFFFFu) >> 20) - 1075;
          if ( (DWORD1(_XMM0) & 0x7FFFFFFFu) >> 20 >= 0x433 )
          {
            if ( v4 >= 0xC )
              LODWORD(_RAX) = -1;
            else
              return v3 << (v4 & 0x1F);
          }
          else
          {
            return v3 >> ((51 - ((DWORD1(_XMM0) & 0x7FFFFFFFu) >> 20)) & 0x1F);
          }
        }
        else
        {
          LODWORD(_RAX) = (int)*(double *)&_XMM0;
        }
      }
      else
      {
        __asm
        {
          vmovq   xmm0, xmm0
          vcvttpd2uqq xmm0, xmm0
        }
        __asm { vpextrd edx, xmm0, 1 }
        __asm { vmovd   eax, xmm0 }
      }
    }
    else if ( (dword_4B5E20 & 0x20) != 0 )
    {
      LODWORD(v8) = _XMM0;
      HIDWORD(v8) = DWORD1(_XMM0) & 0x7FFFFFFF;
      if ( (DWORD1(_XMM0) & 0x7FFFFFFFu) >= 0x41E00000 )
      {
        if ( HIDWORD(v8) >= 0x43E00000 )
        {
          LODWORD(_RAX) = 0;
        }
        else if ( (SDWORD1(_XMM0) & 0x80000000) == 0 )
        {
          LODWORD(_RAX) = sub_462CD8(v8);
        }
        else
        {
          return -(__int64)sub_462CD8(v8);
        }
      }
      else
      {
        LODWORD(_RAX) = (int)*(double *)&_XMM0;
      }
    }
    else
    {
      __asm
      {
        vmovq   xmm0, xmm0
        vcvttpd2qq xmm0, xmm0
      }
      __asm { vpextrd edx, xmm0, 1 }
      __asm { vmovd   eax, xmm0 }
    }
  }
  else
  {
    LODWORD(_RAX) = (int)*(double *)&_XMM0;
  }
  return _RAX;
}
// 462BE8: conditional instruction was optimized away because xmm0_4^4.4 is in (41E00000..43EFFFFF)
// 4B5E20: using guessed type int dword_4B5E20;
